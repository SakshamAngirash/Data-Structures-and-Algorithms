#include<iostream>
#include<vector>
#include<unordered_set> 
using namespace std; 
int main ()
{
    vector<int>arr = {1,2,2,1,1,4,5,6,7}; 
    unordered_set<int>st; 
    for(int i = 0 ; i< arr.size() ; i++)
    {
        st.insert(arr[i]);
    }
    cout<<st.size();
}