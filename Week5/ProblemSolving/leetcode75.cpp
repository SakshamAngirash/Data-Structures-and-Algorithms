class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();//size of vector
        int n0=0;
        int n1=0;
        int n2=0;

        //counting
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                n0++;
            }
            else if(nums[i]==1)
            {
                n1++;
            }
            else if(nums[i]==2)
            {
                n2++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i<n0)
            {
                nums[i]=0;
            }
            else if(i<n1+n0)
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=2;
            }
            
        }

        

    }
};