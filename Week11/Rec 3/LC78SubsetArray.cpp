#include<iostream>
#include<string> 
#include<vector>
using  namespace std;

void subset(int arr[],int n,int idx,vector<int> ans)
{
    if(idx==n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(arr,n,idx+1,ans); 
    ans.push_back(arr[idx]); 
    subset(arr,n,idx+1,ans);
}

int main ()
{
    int arr[] ={1,2,3}; 
    vector<int> v; 
    int n=sizeof(arr)/sizeof(arr[0]);
    subset(arr,n,0,v);

}

///leetcode solution using helper function 
// class Solution {
// public:
//     void helper(vector<int>& nums, vector<int>& ans, vector<vector<int>>& finalans, int idx)
//     {
//         if (idx == nums.size())
//         {
//             finalans.push_back(ans);
//             return;
//         }
//         helper(nums, ans, finalans, idx + 1);
//         ans.push_back(nums[idx]);
//         helper(nums, ans, finalans, idx + 1);
//         ans.pop_back(); // Backtrack
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> ans;
//         vector<vector<int>> finalans;
//         helper(nums, ans, finalans, 0);
//         return finalans;
//     }
// };
