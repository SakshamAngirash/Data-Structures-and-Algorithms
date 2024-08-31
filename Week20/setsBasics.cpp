#include<iostream>
#include<unordered_set>
using namespace std; 

int main()
{
    unordered_set<int> s; 
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    cout<<s.size()<<" ";
    //sets only stores unique values
    s.insert(1);
    cout<<s.size()<<" "<<endl;//no effect on size as 1 already exists

    //for each loop
    for(int element:s)
    {
        cout<<element<<" ";
    }
    s.erase(2);
    cout<<endl;
    for(int element:s)
    {
        cout<<element<<" ";
    }


    // TO CHECK EXISTENCE OF ELEMENT 
    int target = 4; 
    if(s.find(target)!=s.end()) { //TARGET EXISTS : meaning of this line 
        cout<<"exists"<<endl;
    }
    else cout<<"do not exits"<<endl;
    
    //s.find(): it searches the element in the set and if not found it returns the last element of the set 



}