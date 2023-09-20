//100 97 94 ..upto all terms positive

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    /*int a=100;
    for (int i = 100; a >=0; i--)
    {
        cout<<a<<endl;
        a=a-3;
    }*/


    for (int i = 100; (i>=n && i >= 0); i-=3)
    {
        cout<<i<<endl;
    }
    
    
}