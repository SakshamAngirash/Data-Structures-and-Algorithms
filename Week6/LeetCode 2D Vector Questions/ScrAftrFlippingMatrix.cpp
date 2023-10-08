#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    vector<vector<int>>v={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    //step 1 is try to make as many as 1 in the 1st column
    for (int i = 0; i < 3; i++)
    {
        if(v[i][0]==0)
        {
            for (int j = 0; j < 4; j++)
            {
                if(v[i][j]==0)
                {
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
            }
        } 
    }
    //column wise traversal 
    for (int j = 1; j < 4; j++)
    {
        int count0=0;
        int count1=0;
        for (int i = 0; i < 3; i++)
        {
           if(v[i][j]==0)count0++;
           else{count1++;}
        }
        for (int i = 0; i < 3; i++)
        {
           if(count0>count1)
        {
            if(v[i][j]==0)
                {
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
        }
        }
    }
    int total=0;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        int x=1;
        for (int j = 4-1 ; j >= 0; j--)
        {
            sum+=v[i][j]*x;
            x*=2;
        }
        total+=sum;
    }
    cout<<total;
    



}