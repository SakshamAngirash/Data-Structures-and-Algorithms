#include<iostream>
#include<set>
#include<map>
using namespace std; 
int main()
{
    set<int>s;
    s.insert(5); 
    s.insert(3); 
    s.insert(4); 
    for(auto ele: s)
    {
        cout<<ele<<" ";
    }
}
