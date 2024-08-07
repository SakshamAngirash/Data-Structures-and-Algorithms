#include<iostream>
#include<string>
#include<stack> 
#include<algorithm>
using namespace std; 

string shorter(string s)
{
    stack <char> st; 
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if(st.top()!=s[i])st.push(s[i]); 
    }
    // string ko khali krke stack k elements ko usme fill krna h 
    s="";
    while(st.size()>0)
    {
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
    

}

int main()
{
    string s = "aabbbcddaabffg";
    
    cout<<shorter(s); 



}