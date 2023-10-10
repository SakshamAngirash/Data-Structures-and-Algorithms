#include<iostream>
#include<algorithm>
#include<string>
using namespace std; 
int main()
{
    string s;
    getline(cin,s);
    //sorts according to ascii value
    sort(s.begin(),s.end()); 
    cout<<s;
    


}