#include<iostream>
#include<unordered_map>
using namespace std; 
int  main ()
{
    pair<int,int>p ; 
    p.first= 1; 
    p.second=2; 
    cout<<p.first<<" "<<p.second;

    unordered_map <string, int> mp; 

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
}