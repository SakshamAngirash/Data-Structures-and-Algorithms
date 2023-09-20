#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for (int i = 1; i <= n*n; i++)
    {
        cout<<count<<" ";
        if(count==n)
        {
            cout<<endl;
            count=0;
        }
        count++;
    }
    
}