#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
    string s="saksaaahamangirashs";
    sort(s.begin(),s.end());
    int count=1;
    int max=0;
    int MAX=0;
    char c;
    for (int i= 0; i < s.length()-1; i++)
    {
        
        if(s[i]==s[i+1])
        {
            count++;
            max=count; 
            if(max>MAX)
            {
                MAX=max;
                c=s[i];
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