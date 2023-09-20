#include<iostream>
using namespace std;
int main()
{
    float n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
    {
        cout<<n1<<endl;
    }
    if(n2>=n3 &&n2>=n1)
    {
        cout<<n2<<endl;
    }
    if(n3>=n1&&n3>=n2){
       cout<<n3<<endl;
    }
}