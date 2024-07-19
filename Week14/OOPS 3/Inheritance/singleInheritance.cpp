#include<iostream>
using namespace std; 
class Vechile{
    public:
    int tyre; 
    int engine; 
    int lights;
    Vechile()
    {
        cout<<"Vechile Constructor called"<<endl;
    }

    void show()
    {
        cout<<"show is share"<<endl;
    }

};
class Car : public Vechile{//car is a child of vechile
    public: 
    int steering;

};
class Bike : public Vechile{
    public: 
    int handle;
    Bike()
    {
        cout<<"Bike constructor called";
    }
   
};
int main(int argc, char const *argv[])
{
    Bike honda; 
    honda.tyre=50;
     //can access from parent class
     honda.show();
    return 0;
}
