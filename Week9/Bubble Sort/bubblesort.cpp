#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(int argc, char const *argv[])
{
    int arr[6]={5,4,6,3,2,1}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)//n-1 passes
    {
        for (int j = 0; j < n-1-i; j++)//adjacent comparison 
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                // int temp=arr[j]
                // arr[j]=arr[j+1]; 
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
