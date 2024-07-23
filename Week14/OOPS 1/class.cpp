#include<iostream>
#include<string>
using namespace std; 
//class
class Player{
    public:
    int score; //datamembers
    int health; 
    string name;

    //member functions
    void showhealth()
    {
        cout<<"Health is "<<health;
    }
};


class Calculator{
    private:
    int a; 
    int b; 
    public:
    void add(){
        cout<<a+b<<endl;
    }

}; 
int main()
{
    Player amit; //object : variable
    amit.score=10; 
    amit.health=20;
    amit.name="amit";
    cout<<endl<<amit.score<<endl<<amit.health<<endl<<amit.name<<endl;
    //access modifiers
    //array approach vs class approach 

    amit.showhealth();
    Calculator cal;  
    // cal.a=10; 
    // cal.b=20; 
    cout<<endl;
    cal.add();


}