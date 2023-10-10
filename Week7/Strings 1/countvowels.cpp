#include<iostream>
using namespace std; 
int main()
{
    //counting a only
    char str[]="saksham";
    int count=0;
    for (int i = 0; str[i]!=0; i++)
    {
        if(str[i]=='a')
        {
            count++;
        }
    }
    cout<<count;
    
}