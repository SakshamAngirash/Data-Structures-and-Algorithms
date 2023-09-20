#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count=0;
    if(n==0)
    {
        cout<<++count<<endl;
    }
    else{
    while (n>0)
    {
        n=n/10;
        count++;
    }}
    cout<<count;
   
}
