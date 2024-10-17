#include<vector> 
#include<iostream> 
#define ll long long int
using namespace std; 

ll mincostToBreakGrid(int n, int m, vector<ll> &vertical ,vector<ll> &horizontal )
{
    sort(vertical.begin(),vertical.end(),greater<ll>); 
    sort(horizontal.begin(),horizontal.end(),greater<ll>);

    //count of horizontal blocks and vertical blocks
    int hz = 1 ; 
    int vr = 1; 
    
    //two pointer approach
    int h = 0 ; // x wale pe 
    int v = 0 ; //y wale pe 

    ll ans = 0; 


    while(h<horizontal.size() && v<vertical.size())
    {
        if(vertical[v]>horizontal[h]) //priority
        {
            ans+=vertical[v]*vr; 
            hz++; //vertical cut increase the number of horizontal blocks 

            v++;
        }
        else{
            ans+=horizontal[h]*hz;
            vr++; //vice versa

            h++;
        }
    }
    //condition of one another exhausting other than the second one : similar to merge sort 

    while (h<horizontal.size())
    {
        ans+=vertical[v]*vr; 
        hz++; //vertical cut increase the number of horizontal blocks 

        v++;
    }

    while(v<vertical.size())
    {
        ans+=horizontal[h]*hz;
        vr++; //vice versa

        h++;
    }
    
    return ans; 

}

int main()
{

}