#include<iostream>
#include<map> 
using namespace std; 
int main()
{
    map<string,int> mp;
    mp["Saksham"] = 211423; 
    mp["Antriksh"] = 22450; 
    mp["Suvrt"]=211440;
    mp["Amritansh"]=211456;
    for (auto ele : mp)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

}