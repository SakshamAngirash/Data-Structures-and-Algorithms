class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n; 
        return fib(n-1)+fib(n-2); 
    }
};

//Top Down DP : recursion + memosization 

class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,-1); 
        if(n==0 || n==1) return n;
        if(dp[n]!=-1) //check if it already exists
        {
            return dp[n]; //return the number
        }
        dp[n] = fib(n-1)+fib(n-2); //storing it into the dp array
        return dp[n];
    }
};

//Bottom Up Approach : Tablulation Technique  (iterative) 

class Solution {
public:
    int fib(int n) {
        if(n==0||n==1) return n; 
        vector<int> dp(n+1); 
        dp[0]=0;
        dp[1]=1; //filling the base cases 
        for(int i = 2 ; i <= n; i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};




















