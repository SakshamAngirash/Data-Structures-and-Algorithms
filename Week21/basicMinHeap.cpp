#include<iostream>
#include<queue> 
using namespace std;
int main()
{
    priority_queue<int, vector<int> , greater<int>> pq; 
    pq.push(-10);
    pq.push(10);
    pq.push(11);
    pq.push(-1);
    pq.push(-2);
    cout<<pq.top()<<endl;
    pq.pop(); 
    cout<<pq.top()<<endl;

}