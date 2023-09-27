#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    // at operation
    cout<<v.at(2)<<endl;
    v.at(2)=100;
    cout<<v.at(2)<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<endl;
    }


    //sorting operation
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<endl;
    }
    
    

}