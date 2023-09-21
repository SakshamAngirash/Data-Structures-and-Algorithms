#include<iostream>
using namespace std;
int main()
{   
    //swapping without temp or any third variable
    int x,y;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;

}