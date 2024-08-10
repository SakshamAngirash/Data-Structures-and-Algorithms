#include<iostream>
#include<stack>
#include<queue>
using namespace std; 

void display(queue<int>q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front(); 
        cout<<q.front()<<" "; 
        q.pop(); 
        q.push(x);
    }
    cout<<endl;
    
}

void reverse(queue<int>&q)
{
    stack<int> st; 
    while(q.size()>0)
    {
        st.push(q.front()); 
        q.pop(); 
    }
    while(st.size()> 0){
        q.push(st.top()); 
        st.pop();
    }
    
}
int main ()
{
    queue<int> q; 
    q.push(1); 
    q.push(2); 
    q.push(3); 
    q.push(4);
    q.push(5);

    display(q); 
    reverse(q); 
    display(q);

    





    


}