#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>//must be used dealing with string stream class
using namespace std; 

int main()
{
    string str="saksham    is a college student";
    stringstream ss(str);
    string temp; 

    while(ss>>temp)
    {
        cout<<temp<<endl;
    }

}

