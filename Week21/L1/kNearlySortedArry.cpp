#include<iostream>
#include<queue>
using namespace std; 
int main ()
{
    int arr[] = {6,5,3,2,8,10,9}; 
    int k = 3; 
    int n = sizeof(arr)/4; 
    priority_queue<int,vector<int>,greater<int>> pq; //minheap
    // vector<int> ans; 
    // WE DONT NEED EXTRA ARRAY AS SUCH 
    int idx = 0 ; 
    for(int i = 0; i<n;i++)
    {
        pq.push(arr[i]); 
        if(pq.size()>k)
        {
            arr[idx++]=pq.top();
            pq.pop(); 
        }
    }
    while(pq.size()>0)
    {
        arr[idx++]=pq.top();
        pq.pop(); 
    }
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}