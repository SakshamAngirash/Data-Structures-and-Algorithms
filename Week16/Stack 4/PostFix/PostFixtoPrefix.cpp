#include<iostream>
#include<stack>
#include<string>
using namespace std; 
string solve(string val1,string val2, char op) {
    string s = ""; 
    s.push_back(op); 
    s+=val1; 
    s+=val2; 
    return s; 
}
int main()
{
    string str = "79+4*8/3-"; 
    stack<string> st; 
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>=48 && str[i]<=57) st.push(to_string(str[i]-48));
        else{
            char op = str[i]; 
            string val2 = st.top();
            st.pop(); 
            string val1 = st.top(); 
            st.pop(); 
            string ans = solve(val1,val2,op); 
            st.push(ans);
        }
    }
    cout<<st.top();
    
}