//previous greatest element array
//next greatest element array 
//minimum array of both and then min-height(only where min is greater)
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int prev[n];
        int next[n];
        //previous greatest element array
        prev[0]=-1;
        int max=height[0];
        for(int i=1;i<n;i++)
        {
            prev[i]=max;
            if(height[i]>max)
            {
                max=height[i];
            }
        }
        //next greatest element array
        next[n-1]=-1;
        max=height[n-1];
        for(int i=n-2;i>0;i--)
        {
            next[i]=max;
            if(height[i]>max)
            {
                max=height[i];
            }
        }
        //now minimum array : but not a good method 
        //we can do this without creating a new array
        //we can overwrite the conten of min array to any of these two array

        for(int i=0;i<n;i++)
        {
            if(next[i]<prev[i])
            {
                prev[i]=next[i];
            }
        }
        // water calculate krte hain 
        int water=0;
        for(int i=1;i<n-1;i++)
        {
            if(prev[i]>height[i])
            {
                water=water+(prev[i]-height[i]);
            }
        }
        return water;
        
    }
};