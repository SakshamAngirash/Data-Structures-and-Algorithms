#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main()
{
    vector<int> cost={10,15,20};
    cost.push_back(0);
    int total=0;
    int size=cost.size();
    int i=0;
    if((size-1)%2==0)
    {
        total+=cost[0];
    }
    else{
        total+=cost[1];
        i=1;
    }
    while(cost[i]!=0)
    {
        if(cost[i+2]<=cost[i])
        {
            total+=cost[i+2];
            i+=2;
        }
        else{
            total+=cost[i+1];
            i+=1;
        }
    }
    cout<<total;
}
