// m : 1 : sort and find the element at respective index. 
// m : 2 : bubble sorting upto k times kn tc
// m : 3 : heaps

#include<iostream> 
#include<queue> 
using namespace std; 
int main ()
{
    int arr[] = {10,20,-4,6,18,24,105,118}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3 ;
    priority_queue<int> pq; 
    for (int  i = 0; i < n; i++)
    {
        pq.push(arr[i]); 
        if(pq.size()>k) pq.pop(); 
    }
    cout<<pq.top()<<endl;
}