//1 2 4 8 16 32....n 
#include<iostream>
using namespace std;

int main (){
    int n ; 
    cout<<"Enter the number : "<<endl;
    cin>>n;

    int a=1;
    
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        a=a*2;
    }
    
}