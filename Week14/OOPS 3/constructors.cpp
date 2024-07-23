#include<iostream>
#include<vector>
#include<string> 
using namespace std; 

//default constructor

// class Bike{
//     public:
//     int tireSize; 
//     //default constructor
//     Bike () {
//         cout<<"constructor is called "; 
//     }
    
// };

//parameterised constructor 

class Bike{
    public:
    int tyreSize; 
    int engineSize;
    //default constructor
    Bike (int tyreSize,int engineSize=100) { //fgiving default value
        this->tyreSize = tyreSize;
        this->engineSize=engineSize;
        cout<<"constructor is called "; 
    }
    
}; 

int main(){
    Bike tvs(12,250); //obj creation //constructor ko call jaaegaaa
    Bike honda(13,150);
    cout<<tvs.tyreSize<<endl;
    cout<<tvs.engineSize<<endl;
}