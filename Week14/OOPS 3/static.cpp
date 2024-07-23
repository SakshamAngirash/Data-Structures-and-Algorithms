#include<iostream>
#include<vector>
#include<string> 
using namespace std; 
class Bike{
    public:
    static int noofBikes;
    int tyreSize; 
    int engineSize;
    Bike (int tyreSize,int engineSize=100) {
        this->tyreSize = tyreSize;
        this->engineSize=engineSize;
        cout<<"constructor is called "; 
    }

    //static function 
    static void increase()
    {
        noofBikes++;
    }
    
}; 
int Bike::noofBikes = 10;
//scope resolution operator
//static 
void print()
{
    static int b=10; 
    cout<<b<<endl; 
    b++;
}

int main(){
    Bike tvs(12,250); 
    Bike honda(13,150);
    cout<<tvs.tyreSize<<endl;
    cout<<tvs.engineSize<<endl;
    cout<<tvs.noofBikes<<endl;
    print(); 
    print();
    print();

    
}