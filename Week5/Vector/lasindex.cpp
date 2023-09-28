#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);  
    v.push_back(3);  
    v.push_back(4);     

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    int idx;
    /*for (int i = 0; i < v.size(); i++)
    {
        if(x==v.at(i))
        {
            idx=i;
        }
    }*/

    //backward loop

    for (int i = v.size()-1; i >= 0; i--)
    {
        if(x==v[i])
        {
            idx=i;
            break;
        }
    }
    
    cout<<idx;
    
}