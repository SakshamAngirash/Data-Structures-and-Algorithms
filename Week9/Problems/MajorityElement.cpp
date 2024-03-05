// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end()); 
//         int count=0; 
//         int maxcount=INT_MIN; 
//         int majorityElement = nums[0];

//         for(int i=0 ; i < nums.size()-1 ; i++)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                 count++; 
//             }
//             else
//             {
//                 count=0;
//             }
//             if(count>maxcount)
//             {
//                 maxcount=count;
//                 majorityElement = nums[i];
//             }
//         } 
//         return majorityElement;
//     }
// };



// but we have a better approach as we are considering that 
// element to be majority who has occuread atleast n/2 time

