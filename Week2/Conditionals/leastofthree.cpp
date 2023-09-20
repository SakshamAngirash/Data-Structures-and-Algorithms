#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    //a,b,c refers to three of the numbers
    cin>>a>>b>>c;
    if(a<b)
    {
        if(a<c)
        {
            cout<<"a is the smallest";
        }
        else
        {
            cout<<"c is the smallest";
        }
    }else
    {
        if(b<c)
        {
            cout<<"b is the smallest";
        }
        else{
            cout<<"c is the smallest";
        }
    }
}