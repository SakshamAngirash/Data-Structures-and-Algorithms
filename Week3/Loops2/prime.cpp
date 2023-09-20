#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    // better way is to use a flag boolean variable

    bool flag=true;

    for (int i = 2; i < num; i++)
    {
        /*if(i==num){
            cout<<"Number is prime";
        }*/
        if(num%i==0)
        {
            cout<<"Number is not prime"<<endl;
            flag=false;
            break;
        }
        
    }
    if(num==1)
    {
        cout<<"Number is neither prime nor composite"<<endl;
    }
    if(flag==true)
    {
        cout<<"Number is prime"<<endl;
    }
}