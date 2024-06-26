#include<iostream>
#include<string> 
#include<vector>
using  namespace std;
//Method 1 
void subset(string ans,string original)
{
    if(original.length()==0){ 
        cout<<ans<<endl; 
        return; }
    char ch=original[0]; 
    subset(ans+ch,original.substr(1)); 
    subset(ans,original.substr(1));
}
//Method 2: Index method : space complexity 
void subset2(string ans,string original,int idx)
{
    if(original.length()==idx){ 
        cout<<ans<<endl; 
        return; }
    char ch=original[idx]; 
    subset2(ans+ch,original,idx+1); 
    subset2(ans,original,idx+1);
}
//Now we want also wants to store the values in an array
void subset3(string ans,string original,vector<string>& v)
{
    if(original.length()==0){ 
        v.push_back(ans);
        return; }
    char ch=original[0]; 
    subset3(ans+ch,original.substr(1),v); 
    subset3(ans,original.substr(1),v);
}

int main ()
{
    subset("","abc"); 
    subset2("","abc",0);
    vector<string> v; 
    subset3("","abc",v); 
    for(string ele : v){
        cout<<ele<<endl;
    }

}