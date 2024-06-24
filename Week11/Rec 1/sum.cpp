#include<iostream> 
using namespace std; 
int sumfun(int n)
{
    int sum=0;
    if(n==0) return sum;
    sum=n+sumfun(n-1);
    return sum;
}

int main()
{
    cout<<sumfun(4); 
}