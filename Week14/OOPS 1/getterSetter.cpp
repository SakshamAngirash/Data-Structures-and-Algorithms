#include<iostream> 
using namespace std; 

class Player{
    private: 
    int score; 
    int health; 
    public: 
    //setters
    void setScore(int score)
    {
        this->score=score; 
    }
    void setHealth(int health)
    {
        this->health=health;
    }
    //getter
    int getScore()
    {
        return score; 
    }
    int getHealth()
    {
        return health;
    }
};

int main()
{
    Player saksham; 
    saksham.setHealth(100); 
    saksham.setScore(200);
    cout<<saksham.getScore()<<endl; 
    cout<<saksham.getHealth()<<endl;
}