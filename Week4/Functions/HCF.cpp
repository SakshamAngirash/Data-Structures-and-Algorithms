#include<iostream>
using namespace std;
int hcf(int n1,int n2)
{
    int hcf=1;
    for (int i = min(n1,n2); i >= 1; i--)
    {
        if(n1%i==0&&n2%i==0)
        {
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<hcf(n1,n2);
    return 0;
}