#include<iostream>
using namespace std; 

void fun(int n)
{
    if(n==0)return ; //base case
    //cout<<n<<endl; //kaam 
    fun(n-1);//rec
    cout<<n<<endl; //kaam 
    
}
int main()
{
    fun(6);
}