#include<iostream>
using namespace std;

void traverse(int arr[] , int n , int idx)
{
    if(idx==n) return;
    cout<<arr[idx]<<" "; 
    traverse(arr, n,idx+1);

}
int maxinarray(int arr[], int n, int idx)
{
    if(idx==n)return INT_MIN; 
    return max(arr[idx],maxinarray(arr,n, idx+1));
}
int main ()
{
    int arr[5]={1,2,3,4,5}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    traverse(arr,n,0);
}