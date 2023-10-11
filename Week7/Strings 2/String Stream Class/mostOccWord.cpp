#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std; 
int main()
{
    string str="saksham is a good boy saksham goes to college saksham a a a a";
    //to find the most occ of word

    vector<string> v;
    stringstream ss(str);
    string temp;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    //sorting made same words appear together

    int count=1;
    int max=0;
    int MAX=0;
    string c;
    for (int i= 0; i < v.size()-1; i++)
    {
        
        if(v[i]==v[i+1])
        {
            count++;
            max=count; 
            if(max>MAX)
            {
                MAX=max;
                c=v[i];
            }
        }
        else if(count>1)
        {
            count=1;
        }
        else{continue;}
    }
    cout<<MAX<<c;


}