#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    vector<string> s={"flow","flower","flight"};
    // sort(s.begin(),s.end());
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i]<<" ";
    // }
    string str=s[0];
    string str2=s[s.size()-1];
    string temp="";
    for (int i = 0; i < str.length()&& i<str2.length(); i++)
    {
        if(str[i]!=str2[i])
        {
            break;
        }
        temp+=str[i];
    }
    cout<<temp;
}