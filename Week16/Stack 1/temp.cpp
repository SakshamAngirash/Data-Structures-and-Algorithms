#include<iostream>
#include<stack> 
using namespace std; 
int main()
{
    stack<int> st; 
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50); 
    stack<int> temp; 
    while (st.size()!=0)
    {
        int x = st.top(); 
        st.pop(); 
        temp.push(x);
    }
    while(temp.size()!=0)
    {
        cout<<temp.top()<<" "; 
        temp.pop();
    }
    

}