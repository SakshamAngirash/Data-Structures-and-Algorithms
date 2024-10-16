#include<iostream> 
#include<unordered_set>
#include<vector>
using namespace std; 
int main()
{
    vector<int> arr ={0,0,1,1,1};
    int n = arr.size(); 
    unordered_set<int>st; 
    for(int i = 0 ; i<arr.size();i++)
        {
            st.insert(arr[i]); 
        }
        cout<<st.size();  
}