#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;//number
    int sum=0;
    
    while(n<0)
    {
        sum=sum+(n%10);
        n/=10;
    }
    cout<<"SUM "<<sum;
}