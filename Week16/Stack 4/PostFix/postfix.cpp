#include<iostream>
#include<stack>
#include<string>
using namespace std; 
int solve(int val1, int val2, char op) {
    if (op == '+') return val1 + val2;
    else if (op == '-') return val1 - val2;
    else if (op == '*') return val1 * val2;
    else if (op == '/') return val1 / val2;
    return 0;
}
int main()
{
    string str = "79+4*8/3-"; 
    stack<int> st; 
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>=48 && str[i]<=57) st.push(str[i]-48);
        else{
            char op = str[i]; 
            int val2 = st.top();
            st.pop(); 
            int val1 = st.top(); 
            st.pop(); 
            int ans = solve(val1,val2,op); 
            st.push(ans);
        }
    }
    cout<<st.top();
    
}