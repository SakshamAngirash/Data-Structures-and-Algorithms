#include<iostream>
#include<stack>
using namespace std; 
int main()
{
    stack<int> st; 
    cout<<st.size()<<endl ;
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50); 
    cout<<st.size()<<endl; 
    st.pop();
    cout<<st.size()<<endl; 
    cout<<st.top()<<endl; //it do not deletes or pop it just returns the top most
    cout<<st.size()<<endl; 
    
    //printing the element of stack in reverse order
    // while(st.size()>0)
    // {
    //     cout<<st.top()<<" "; 
    //     st.pop();
    // } // but here we are also loosing the elements while popping them 

    stack<int> temp ; 
    while(st.size()>0)
    {
        cout<<st.top()<<" "; 
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    // while(temp.size()>0)
    // {
    //     cout<<temp.top()<<" "; 
    //     temp.pop();
    // }
    //putting back elements to stack 

    while(temp.size()>0)
    {
        st.push(temp.top()); 
        temp.pop();
    }
    cout<<st.top()<<endl;


}