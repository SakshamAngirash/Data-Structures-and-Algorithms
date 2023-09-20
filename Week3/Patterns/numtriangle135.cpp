#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int count=1;
        cout<<count<<" ";
        for (int j = 0; j < i; j++)
        {
            count+=2;
            cout<<count<<" ";
            
        }
        cout<<endl;
    }
    
}