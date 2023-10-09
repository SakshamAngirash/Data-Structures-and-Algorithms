#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string str="saksham angirash";//null character
    cout<<str<<endl;
    cout<<str[0];

    //taking input
    string s;
    //cin>>s;//cin will work only if there is no spaces a
    //as spaces and enter disable the current cin
    

    //getline
    getline(cin,s);
    cout<<s;

}