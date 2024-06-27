#include<iostream>
#include<string> 
#include<vector>
using  namespace std;
 

void subset(string ans,string original,vector<string>& v,bool flag)
{
    if(original.length()==0){ 
        v.push_back(ans);
        return; }
    char ch=original[0];
    //length 1 bchegi to we cant compare 
    if(original.length()==1)
    {
        if(flag==true)subset(ans+ch,original.substr(1),v,true); 
        subset(ans,original.substr(1),v,true);
        return;//when we dont want to run the below two conditions
    }
    char dh=original[1];
    if(ch==dh)// when there is duplicate
    {
        if(flag==true)subset(ans+ch,original.substr(1),v,true);//avoid left side of call as the answer is called for false
        subset(ans,original.substr(1),v,false);//adjusted false here
    }
    //normal call : when there is no duplicates
    else{
        if(flag==true)subset(ans+ch,original.substr(1),v,true);//avoid left side of call as the answer is called for false
        subset(ans,original.substr(1),v,true);
    }
}

int main ()
{
    string str="aab"; 
    vector<string> v; 
    subset("",str,v,true);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}

