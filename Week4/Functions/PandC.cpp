#include<iostream>
using namespace std;
int factorial(int x)
{
    int fact=1;
    if(x==0)
    {
        return 1;
    }
    else{
        for (int i = x; i >= 1; i--)
        {
            fact=fact*i;
        }
        return fact;
    }
}
float combination(int n,int r)
{
    float ans=(factorial(n))/factorial(r)*factorial(n-r);
    return ans;
}
float permutation(int n,int r)
{
    float ans=(factorial(n))/factorial(n-r);
    return ans;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r)<<endl;
    cout<<permutation(n,r)<<endl;
    
}