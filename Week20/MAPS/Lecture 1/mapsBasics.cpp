#include<iostream>
#include<unordered_map>
using namespace std; 
int main ()
{
    // pair<int,int> p ; 
    // p.first = 1 ; 
    // p.second = 5; 
    // cout<<p.first<<" "<<p.second;
    unordered_map<string, int> mp; 
    //key : value 
    //we cannot directly insert into map , we need a pair for the same 
    pair<string,int> p ; 
    p.first="Saksham Angirash"; 
    p.second=211423; 
    mp.insert(p);

    pair<string,int> p1 ; 
    p1.first="Antriksh Dubey"; 
    p1.second=211450; 
    mp.insert(p1);

    pair<string,int> p2 ; 
    p2.first="Niharika"; 
    p2.second=211438; 
    mp.insert(p2);

    //printing must be done using for loop and
    // we must have to use pair keyword
    // for(pair<string,int> ele : mp)
    // {
    //     cout<<ele.first<<" "<<ele.second<<endl;
    // }
    

    //use of auto keyword : to automatically detect the type in the for each lopp 
    for(auto ele : mp)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }


    //BETTER WAY OF INSERTING ELEMENTS IN A HASHMAP 
    mp["Suvrt"] = 764;
    mp["amtriosh"] = 763;
    mp["karan"] = 762;
    mp["goli"] = 761;

    //and this is automatically inserted only in one line 
    for(auto ele : mp)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<endl;
    //DELETION : ONLY USING THE KEY 
    mp.erase("Suvrt");
    for(auto ele : mp)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    



}