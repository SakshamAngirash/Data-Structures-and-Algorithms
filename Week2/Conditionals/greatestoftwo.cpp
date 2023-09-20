#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float length,breadth,area,circum;
    cin>>length>>breadth;
    area=length*breadth;
    circum=2*(length+breadth);
    if(area>circum)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
