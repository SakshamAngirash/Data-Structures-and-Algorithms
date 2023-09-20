#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int count=1;
    for ( int i = 1; i <= n*n; i++)
    {
        int asci=64+count;
        cout<<(char)asci<<" ";
        if(count==n){
           cout<<endl;
           count=0;
        }
        count++;
    }    
    
}