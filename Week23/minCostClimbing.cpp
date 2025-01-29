//leetcode746

// BASIC RECURSSION 
class Solution {
public:
    int helper(vector<int>& cost, int i,int sum)
    {
        //if we reaches the desired index , we can return our sum 
        if(i>=cost.size())return sum; 
        //taking 1 or 2 jump followed by addition of the cost and the sum 
        return min(helper(cost,i+1,sum+cost[i]),helper(cost,i+2,sum+cost[i]));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(helper(cost,0,0),helper(cost,1,0));
        //either starting from 0 or 1 (first step)
    }
};


//REVERSE RECURSIVE SOLUTION 

class Solution {
public:
    int helper(vector<int>& cost, int i,int sum,vector<int>& dp)
    {
        //if we reaches the desired index , we can return our sum 
        if(i==0 || i==1)return sum+cost[i];
        if(i<0)return sum; 
        //taking 1 or 2 jump followed by addition of the cost and the sum 
        return dp[i] = min(helper(cost,i-1,sum+cost[i],dp),helper(cost,i-2,sum+cost[i],dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1); 
        return min(helper(cost,n-1,0,dp),helper(cost,n-2,0,dp));
        //either starting from 0 or 1 (first step)
    }
};


// ADDING MEMORISATION DP (TO REVERSE RECURSSION)

class Solution {
public:
    int helper(vector<int>& cost, int i,vector<int>& dp)
    {
        //if we reaches the desired index , we can return our sum 
        if(i==0 || i==1)return cost[i]; 
        if(dp[i]!=-1) return dp[i];
        //taking 1 or 2 jump followed by addition of the cost and the sum 
        return dp[i] = cost[i]+min(helper(cost,i-1,dp),helper(cost,i-2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1); 
        return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
        //either starting from 0 or 1 (first step)
    }
};


//TABULATION METHOD

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for(int i=2; i<n ; i++)
        {
            cost+=min(cost[i-1],cost[i-2]); 
        }
        return min(cost[n-1],cost[n-2]);
    }
};