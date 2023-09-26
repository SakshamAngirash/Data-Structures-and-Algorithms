//linear and binary search important for placements
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int length=sizeof(arr)/sizeof(arr[0]);
    int find;
    cout<<"Enter the element to be searched : ";
    cin>>find;
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==find)
        {
            cout<<find<<" is present at index : "<<i;
            break;
        }
        else if (arr[i]==length)
        {
            cout<<"NOT EXIST";
        }
    }
    
}