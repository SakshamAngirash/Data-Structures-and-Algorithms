#include<iostream> 
#include<stack> 
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
void revKFirst(queue<int> &q,int k)
{
    stack<int> st; 
    int n = q.size(); 
    while(q.size()>0) 
    {
        int x= q.front(); 
        q.pop() ;
        st.push(x);
    }
    stack<int> gt; 
    //putting upper members in the gt as it is
    for (int i = 0; i < n-k; i++)
    {
        gt.push(st.top()); 
        st.pop(); 
    }
    while(st.size()!=0)
    {
        q.push(st.top()); 
        st.pop(); 
    }
    while(gt.size()!=0)
    {
        q.push(gt.top()); 
        gt.pop();
    }
}
int main ()
{
    queue<int> q; 
    q.push(1);
    q.push(2);
   
    revKFirst(q,2);
    display(q);


    
    
    



}