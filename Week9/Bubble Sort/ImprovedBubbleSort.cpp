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
        bool flag=true;
        for (int j = 0; j < n-1-i; j++)//adjacent comparison 
        {
            
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false; 
            }
           
        }
         if(flag==true)//swap didnt happened
            {
                break;
            }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
