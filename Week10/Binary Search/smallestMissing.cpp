#include<iostream>
#include<vector>
using namespace std; 


int main()
{

   ///Linear Approach O{n}

   vector <int> arr={0,1,2,3,4,8,9,12};
//    for (int i = 0; i < arr.size(); i++)
//    {
//       if(arr[i]!=i)
//       {
//         cout<<i;
//         break;
//       }
//    }




   //binary search approach 

   int high=arr.size()-1; 
   int low=0 ; 
   int ans; 
   while(low<=high)
   {
      int mid=low+(high-low)/2; 
      if(arr[mid]==mid)
      {
        low=mid+1; // All before are sorted
      }
      else{
        ans=mid; 
        high=mid-1;
      }
   }
   cout<<ans;

}
