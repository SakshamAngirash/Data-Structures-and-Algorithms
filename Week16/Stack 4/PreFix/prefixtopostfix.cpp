//will traverse from right to left 
//will vice versa val1 and val2 rest is same...

#include<iostream>
#include<stack>
#include<string>
using namespace std; 
string solve(string val1,string val2, char op) {
    string s = ""; 
    s+=val1; 
    
    s+=val2; 
    s.push_back(op); 
    return s; 
}
int main()
{
    string str = "-/*+79483";
    stack<string> st; 
    for (int i = str.length()-1; i >= 0 ; i--)
    {
        if(str[i]>=48 && str[i]<=57) st.push(to_string(str[i]-48));
        else{
            char op = str[i]; 
            string val1 = st.top();
            st.pop(); 
            string val2 = st.top(); 
            st.pop(); 
            string ans = solve(val1,val2,op); 
            st.push(ans);
        }
    }
    cout<<st.top();
    
}