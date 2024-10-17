bool cmp(vector<int>&a ,vector<int> &b)
{
    return a[1] < b[1] ; 
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> result; 
        int n = intervals.size(); 

        //will go right to left in order to attain the minmum starting time
        result.push_back(intervals[n-1]); 
        //will start from second last element as last 1 is already included 
       
        for(int i=n-2 ; i>=0 ; i--)
        {
            
            vector<int>currentInterval = intervals[i];

            if(currentInterval[1]>=result[result.size()-1][0])
            {
                //merging is possible 
                result[result.size()-1][0]= min(result[result.size()-1][0],currentInterval[0]); 
                result[result.size()-1][1]= max(result[result.size()-1][1],currentInterval[1]); 
            }
            else{
                //if not overlapping 
                result.push_back(intervals[i]);
            }
        }
        return result; 
    }
};