#include<iostream>
#include<string>
using namespace std; 
int main()
{
    int n; 
    cin>>n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i < n; i+=2)
    {
        str[i]='a';
    }
    cout<<str;

}