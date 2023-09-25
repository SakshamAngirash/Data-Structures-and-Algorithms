#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr[n];//we should always give either an initialiser or an size.
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"th elememnt: ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"th elememnt: ";
        cout<< arr[i]<< endl;
    }


    
}