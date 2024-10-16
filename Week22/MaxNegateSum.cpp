//leetcode 1005 
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        //O(n)
        priority_queue<int, vector<int>,greater<int>> pq(nums.begin(),nums.end());
        int sum = 0 ; //initilising a sum 
        for(int i =0 ; i<nums.size(); i++) sum+=nums[i]; //taken sum of whole array
        while(k--)
        {
            int el = pq.top(); //min element
            if(el==0)
            {
                break; 
            }
            else {
                pq.pop(); //pop out
                sum -= el;
                pq.push(-1*el);//push negate of the element
                sum += (-el); 
            }
        }
        return sum ;
         

        
    }
};