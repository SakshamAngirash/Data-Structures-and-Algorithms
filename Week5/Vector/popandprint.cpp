#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    //printing vector without knowing size
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //using pop back
    v.pop_back();
    v.pop_back();
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //pop_back()function automatically adjust the size 
    //but its not possible to delete capacity once allocated
    
    
}