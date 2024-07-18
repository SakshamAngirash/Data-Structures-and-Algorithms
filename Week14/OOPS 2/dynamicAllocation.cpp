#include<iostream> 
using namespace std; 

class Player{
    private: 
    int health;
    int age; 
    int score; 
    bool alive; 

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

};

//passing a class as an argument 
int addScore(Player a,Player b)
{
    return a.getScore()+b.getScore(); 
}

//returning a class 
Player getMaxscorePlayer(Player a,Player b)
{
    if(a.getScore()>b.getScore()) return a; 
    else return b; 
}
int main()
{
    // Player saksham; 
    // saksham.setHealth(100); 
    // saksham.setScore(200);
    // saksham.setAge(21); 
    // saksham.setAlive(true);
    // cout<<saksham.getScore()<<endl; 
    // cout<<saksham.getHealth()<<endl;
    // cout<<saksham.getAge()<<endl;
    // cout<<saksham.getAlive()<<endl;

    // Player saksham1; 
    // saksham1.setHealth(10); 
    // saksham1.setScore(20);
    // saksham1.setAge(12); 
    // saksham1.setAlive(true);
    // cout<<saksham1.getScore()<<endl; 
    // cout<<saksham1.getHealth()<<endl;
    // cout<<saksham1.getAge()<<endl;
    // cout<<saksham1.getAlive()<<endl;

    // cout<<"Adding scores  :"<<addScore(saksham,saksham1)<<endl;

    // //returning a player 
    // Player winner = getMaxscorePlayer(saksham,saksham1); 

    // cout<<winner.getAge();


    Player *angirash=new Player; //run time , dynamic allocation
    // Player angirashobj = *angirash; //create object 
    // angirashobj.setHealth(10); 
    // angirashobj.setScore(20);
    // angirashobj.setAge(12); 
    // angirashobj.setAlive(true);
    // cout<<angirashobj.getScore()<<endl; 
    // cout<<angirashobj.getHealth()<<endl;
    // cout<<angirashobj.getAge()<<endl;
    // cout<<angirashobj.getAlive()<<endl;

    //star operator 

    (*angirash).setHealth(10); 
    (*angirash).setScore(20);
    (*angirash).setAge(12); 
    (*angirash).setAlive(true);
    cout<<(*angirash).getScore()<<endl; 
    cout<<(*angirash).getHealth()<<endl;
    cout<<(*angirash).getAge()<<endl;
    cout<<(*angirash).getAlive()<<endl;

    //arrow operator
    angirash->setHealth(10); 
    angirash->setScore(20);
    angirash->setAge(12); 
    angirash->setAlive(true);
    cout<<angirash->getScore()<<endl; 
    cout<<angirash->getHealth()<<endl;
    cout<<angirash->getAge()<<endl;
    cout<<angirash->getAlive()<<endl;



}