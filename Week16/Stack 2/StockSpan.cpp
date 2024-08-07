#include<iostream>
#include<stack>
#include<vector>

using namespace std; 

int main ()
{
    vector<int> arr= {100,80,60,81,70,60,75,85}; 
    vector<int> ans(arr.size());
    int n = arr.size(); 
    stack<int> st; 
    ans[0] = 1; 
    st.push(0);

    for(int i=1;i<=n;i++)
    {
       while(st.size()>0 && arr[st.top()]<=arr[i])
       {
        st.pop(); 
       }
       if(st.size()==0)ans[i]=-1; 
       else{
        ans[i]=st.top();
       }
       st.push(i);
    
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = i - ans[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
}