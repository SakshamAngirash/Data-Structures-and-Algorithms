class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size(); 
        vector <int> ans(k); //k elements insert 
        if(x<arr[0])
        {
            for(int i=0;i<k;i++)
            {
                ans[i]=arr[i]; 
            }
            return ans; 
        }
        if (x>arr[n-1])
        {
            int i = n-1; 
            int j =k-1; 
            while(j>=0)
            {
                ans[j]=arr[i]; 
                j--; 
                i--; 
            }
            return ans; 
        }
        int lo=0; 
        int hi=n-1; 
        bool flag=false; // if x is present or not 
        int t=0; //representing k index of answer
        //binary search 
        int mid=-1; 
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2; 
            if(arr[mid]==x){
                flag=true; 
                //x is present 
                ans[t]=arr[mid]; 
                t++; 
                break; 
            }
            else if (arr[mid]>x)hi=mid-1; 
            else lo=mid+1; 
        }
        int lb=hi; 
        int ub=lo;//initialise upper and lower bound

        if (flag==true){
            lb= mid-1; 
            ub=mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1)
        {
            //now have to compare upper bound and lower bound which one themm is closer
            int d1=abs(x-arr[lb]); 
            int d2=abs(x-arr[ub]); 
            if(d1>d2)
            {
                ans[t]=arr[ub];
                ub++;  
            }
            else
            {
                ans[t]=arr[lb];
                lb--; 
            }
            t++;

        }
        //if our upper nd lower bound have crossed the limits
        if(lb<0)
        {
            while(t<k)
            {
                ans[t]=arr[ub];
                ub++;  
                t++;
            }
        }
        if(ub>n-1)
        {
            while(t<k)
            {
                ans[t]=arr[lb];
                lb--;  
                t++;
            }
        }
        sort(ans.begin(),ans.end());
      return ans;

    }
};