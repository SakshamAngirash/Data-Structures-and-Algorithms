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
    float ans=(factorial(n))/(factorial(r)*factorial(n-r));
    return ans;
}
int main()
{
    int n; 
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<combination(i,j)<<"  ";
        }
        cout<<endl;
    }
    
}