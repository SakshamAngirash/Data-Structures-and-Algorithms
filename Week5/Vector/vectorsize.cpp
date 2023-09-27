#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //we can initialise vector with a size
    vector<int> v(5);//initialised by 0 if not given
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    vector<int> v1(5,7);//initialised by 7 all values
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<endl;
    }
    
    
}