#include<iostream>
#include<stack>
#include<vector>

using namespace std; 

int main ()
{
    vector<int> arr= {3,1,2,5,4,6,2,3}; 
    // cout<<v.size()<<endl;
    vector<int> ans(arr.size());

    int n = arr.size(); 

    //creating a stack 
    stack<int> st; 
    ans[0] = -1; 
    st.push(arr[0]);

    for(int i=1;i<=n;i++)
    {
       // pop all small top elements
       while(st.size()>0 && st.top()<arr[i])
       {
        st.pop(); 
       }
       if(st.size()==0)ans[i]=-1; 
       else{
        ans[i]=st.top();//top most is the next greatest element
       }
       st.push(arr[i]);
    
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
}