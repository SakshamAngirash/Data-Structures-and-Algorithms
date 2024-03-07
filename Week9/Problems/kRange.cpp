#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std; 
int main()
{
    int arr[]={5,3,10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
    float kmin=(float)INT_MIN; // cause we are talking about range
    float kmax=(float)INT_MAX; 

    for(int i=0; i<n-1;i++ )
    {
        if(arr[i]>=arr[i+1]){ //kmin

        }
    }

}
