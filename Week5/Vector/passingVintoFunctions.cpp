#include<iostream>
#include<vector>
using namespace std;
void change(vector <int> a)
{
    a.at(1)=0;
}
//lets see how we can pass by reference
void changeref(vector <int>& a)
{
    a.at(1)=0;
}
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);
    //passing vector to an fucntion is not same as array 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    changeref(v);
    //passing vector to an fucntion is not same as array 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;




}