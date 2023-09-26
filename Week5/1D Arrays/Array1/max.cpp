#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of an array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(maximum<=arr[i])
        {
            maximum=arr[i];
        }
    }
    cout<<"maximum: "<<maximum;
    
}