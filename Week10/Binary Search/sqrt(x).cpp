#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main()
{
   int n =20; 
   int low=0; 
   int high=n;
   while(low<=high)
   {
    int mid=low+(high-low)/2; 
    if(mid*mid==n) return mid; 
    if(mid*mid>n) 
    {high = mid-1; }
    if(mid*mid<n)
    {
        low=mid+1; 
    }
   }
   return mid-1;
}