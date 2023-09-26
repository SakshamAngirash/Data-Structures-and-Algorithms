#include<iostream>
#include<climits>
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
    //use of climits
    
    int maximum = INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        if(maximum<=arr[i])
        {
            maximum=arr[i];
        }
    }
    cout<<"maximum: "<<maximum;
    
}