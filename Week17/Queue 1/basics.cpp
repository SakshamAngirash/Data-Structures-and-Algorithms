#include<iostream>
#include<queue>
using namespace std; 
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout<<q.front()<<" ";
        q.pop(); 
        q.push(x);  
    }
    cout<<endl;
}
int main ()
{
    queue<int> q; 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q); 
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    
    // q.pop(); 
    // cout<<q.front()<<endl;
}