#include<iostream> 
#include<string>
using namespace std; 
class Cricketer {
    private: 
    string name; 
    int age; 
    int matches; 
    int avg; 

    public:
    //setters 
    void setName(string name) {this->name = name;} 
    void setAge(int age){this->age =age;}
    void setMatches(int matches){this->matches=matches;} 
    void setAvg(int avg){this->avg=avg;} 
    //getters
    string getName() {return name;} 
    int getAge(){return age;}
    int getMatches(){return matches;} 
    int getAvg() {return avg;} 

};
int main(){
    // Cricketer saksham; 
    // saksham.setAge(18); 
    // cout<<saksham.getAge();

    Cricketer cricketers[4];
    for (int i = 0; i < 4; i++)
    {
        int age;
        cin>>age;
        cricketers[i].setAge(age); 
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<cricketers[i].getAge(); 
    }
     

}