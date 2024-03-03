
//sort a string in decreasing order of values  associated after 
// removal of values less than x 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="AZYZXBJKX";
    string str; 
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='X')
        {
            str += s[i];
        }
    }
    sort(str.begin(),str.end());
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i];
    }
    
    return 0;
}