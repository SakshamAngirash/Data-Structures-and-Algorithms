#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;//enter the number
    if(n<0)
    {
        n=-(n);
    }
    cout<<n;
}