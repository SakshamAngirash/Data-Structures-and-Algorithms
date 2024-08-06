#include<iostream>
#include<stack>
#include<string>
using namespace std; 

bool isBalanced(string s)
{
    if(s.length()%2!=0) return false ; //if the length is odd
    stack<char>st; 
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(') st.push('(');
        else{
            if(st.size()==0) return false; 
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    return false; 

}

int main()
{
    string s = "()()(()";
    cout<<isBalanced(s);

}

// leetcode " valid paranthesis"
class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false; // If the length is odd
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top != '[') ||
                    (s[i] == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return st.empty(); // Check if the stack is empty
    }
};
