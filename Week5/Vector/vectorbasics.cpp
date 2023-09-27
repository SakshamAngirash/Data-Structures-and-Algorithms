#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v; //you need not mention the size of a vector
    //agr input leni h to [] ka use nhi krne ka : risk hai
    v.push_back(6);
    cout<<v.size();
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size();
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size();
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size();
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size();
    cout<<v.capacity()<<endl;
    //output k lie [] wale trike ka use krna safe hai or update krne k lie b theek hai
    cout<<v[0];
    //there is a slight diff between size and capacity 
    

}