#include<iostream> 
using namespace std; 
class Gun{
    public: 
    int ammo;
    int damage; 
    int scope; 
};

class Player{
    private: 
    //private class inside another class
    class Helmet{
        int hp; 
        int lvl; 
    public:
        void sethp(int hp){
            this->hp=hp; 
        }
        void setlvl(int lvl)
        {
            this->lvl=lvl;
        }
        int gethp()
        {
            return hp; 
        }
        int getlvl(){
            return lvl;
        }
    };
    int health;
    int age; 
    int score; 
    bool alive;
    Gun gun;  
    Helmet helmet; 
    

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
    void setAge(int age)
    {
        this->age=age;
    }
    void setAlive(bool alive)
    {
        this->alive=alive;
    }
    void setGun(Gun gun)
    {
        this->gun=gun; 
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
    int getAge()
    {
        return age;
    }
    bool getAlive()
    {
        return alive;
    }
    Gun getGun()
    {
        return gun;
    }

   void setHelmet(int level)
   {
    Helmet helmet; // Create a local Helmet object
    helmet.setlvl(level);
    int health = (level == 1) ? 25 : 50;
    helmet.sethp(health);
    this->helmet = helmet; // Assign the local Helmet object to the member variable
   }
   Helmet getHelmet()
   {
    return helmet;
   }
};
int main()
{
    Player players[3]={saksham, niharika , antriksh};


}