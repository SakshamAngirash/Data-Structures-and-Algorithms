#include<iostream>
using namespace std; 
int main()
{
    int x,y;
    cin>>x>>y;
    int *p=&x,*p2=&y;

    cout<<*p+*p2;
}