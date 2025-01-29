//leetcode 62
//recursive solution : with time limit exceeded
class Solution {
public:
    int helper(int sr,int sc, int er,int ec)
    {
        if(sr==er && sc==ec) return 1; //ek answer mil gya h 
        if(sr>er || sc>ec) return 0 ; // if exceeds limit
        int rightways=helper(sr,sc+1,er,ec); 
        int downways=helper(sr+1,sc,er,ec);
        return rightways+downways;
    }

    int uniquePaths(int m, int n) {
        int ways = helper(0,0,m-1,n-1);
        return ways;
        
    }
};