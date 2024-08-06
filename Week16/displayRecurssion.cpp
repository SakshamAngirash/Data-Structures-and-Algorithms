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

void reverseStackRecursive(stack<int> &st)
{
    if(st.size()==0) return ;
    cout<<st.top()<<" "; 
    int x = st.top();
    st.pop();
    reverseStackRecursive(st); 
    st.push(x);
}

void printStackRecursive(stack<int> &st)
{
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    printStackRecursive(st); 
    st.push(x);
    cout<<st.top()<<" "; 
}

int main()
{
    stack<int> st;
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50); 
    
    printStack(st);
    printStackRecursive(st);
    cout<<endl;
    reverseStackRecursive(st);
}