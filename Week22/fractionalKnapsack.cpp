#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

//creation of custom comparator 
bool cmp(pair<int,int>&p1,pair<int,int>p2)
{
    //first : profit , first : weight
    double ratio1 = (p1.first*1.0)/(p1.second*1.0);
    double ratio2 = (p2.first*1.0)/(p2.second*1.0);
    return ratio1>ratio2; //pick r1 if greater and r2 if r2 is greater
}

double fractionalKnapsack(vector<int> &profit, vector<int> &weights, int n, int W)
{
    vector<pair<int,int>> arr; //creating new array for pushing back value and weight
    for(int i = 0 ; i<n ; i++)
    {
        arr.push_back({profit[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),cmp); //custom comparator
    double result = 0; 
    for(int i = 0 ; i<n;i++)
    {
        //if no fractional 
        if(arr[i].second <= W)
        {
            result += arr[i].first; //add the profit 
            W-= arr[i].second; //reduce the capacity 
        }
        //case two : if fractional
        else 
        {
            result += ((arr[i].first*1.0)/arr[i].second*(1.0))  *  W; //reduce the fractional weight
            W = 0;
            break;
        }
    }
    return result;

}
int main ()
{
    vector<int> profit = {60, 100 , 120}; 
    vector<int> weights = {10, 20 , 30 }; 
    int W = 50 ; 
    int n = 3; 
    cout<<fractionalKnapsack(profit,weights,n,W)<<" ";
    return 0 ; 

}