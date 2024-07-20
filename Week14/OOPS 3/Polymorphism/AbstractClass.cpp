#include<iostream> 
using namespace std; 
//abstract class : which  has pure virtual functions
class Vechile
{
    public:
    virtual void calculateMilaege() = 0; 

}; 
class Car : public Vechile
{
    public: 
    void calculateMilaege()
    {
        cout<<"Cars milaege"<<endl;
    }

}; 
class Bike : public Vechile
{
    public:
    void calculateMilaege()
    {
        cout<<"Bike Mileage"<<endl;
    } 

}; 


int main()
{
    Car c; 
    Bike b; 
    c.calculateMilaege(); 
    b.calculateMilaege();

}