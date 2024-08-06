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


void pushAtBottomrecursive(stack<int> &st, int val)
{
    if(st.size()==0)
    {
        st.push(val);
        return; 
    }
    int x = st.top();
    st.pop(); 
    pushAtBottomrecursive(st,val); 
    st.push(x);
}

void reverse(stack<int>&st){
    if(st.size()==1) return ;
    int x = st.top(); 
    st.pop(); 
    reverse(st); 
    pushAtBottomrecursive(st,x); 

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
    pushAtBottomrecursive(st,-10);
    printStack(st);

    // Now looking for reversing a stack 
    reverse(st);
    printStack(st);

}