#include<iostream>
#include<stack> 
using namespace std; 
void printStack(stack<int> &st)
{
    stack<int>temp ; 
    while(st.size()>0)
    {
        temp.push(st.top()); 
        st.pop();
    }
    while(temp.size()>0)
    {
        cout<<temp.top()<<" "; 
        st.push(temp.top()); 
        temp.pop();
    }
    cout<<endl;
}
void InsertAtBottom(stack<int>&st,int val)
{
    //extra stack 
    stack<int> temp; 
    while (st.size()>0)
    {
        temp.push(st.top()); 
        st.pop();
    }
    //now push the val at the bottom 
    st.push(val); 
    while(temp.size()>0)
    {
        st.push(temp.top()); 
        temp.pop();
    }
}
void InsertAtIdx(stack<int>&st, int idx , int val)
{
    if(idx==st.size()) InsertAtBottom(st,val);
    else{
    stack<int> temp; 
    while (st.size()>idx)
    {
        temp.push(st.top()); 
        st.pop();
    }
    st.push(val); 
    while(temp.size()>0)
    {
        st.push(temp.top()); 
        temp.pop();
    }
    }

}
int main()
{
    stack<int> st;
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50); //initial stack 
    
    printStack(st);
    InsertAtBottom(st,45);
    printStack(st);
    InsertAtIdx(st,5,30);
    printStack(st);

   
    
}