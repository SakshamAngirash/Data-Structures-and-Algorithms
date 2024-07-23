#include<iostream>
#include<vector>
#include<string> 
using namespace std; 
class Bike{
    public:
    int tyreSize; 
    int engineSize;
    // Bike (int tyreSize,int engineSize=100) {
    //     this->tyreSize = tyreSize;
    //     this->engineSize=engineSize;
    //     cout<<"constructor is called "; 
    // }

    //Initilisation list for the same 
    Bike(int ts, int es) : tyreSize(ts),engineSize(es){
        
    }
    
}; 

int main(){
    Bike tvs(12,250); 
    Bike honda(13,150);
    cout<<tvs.tyreSize<<endl;
    cout<<tvs.engineSize<<endl;
}