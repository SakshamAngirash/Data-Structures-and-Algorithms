#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(int argc, char const *argv[])
{
    int arr[6]={1,2,3,4,5,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag=false; 
            break;
        }
    }
    if(flag==false) cout<<"Not Sorted "; 
    else cout<<"Sorted";
    
    return 0;
}
