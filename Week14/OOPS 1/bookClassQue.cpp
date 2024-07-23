#include<iostream>
#include<string>
using namespace std; 

class Book
{
    public:
    string name; 
    int price; 
    int pageno;
    
    int countbooks(int price)
    {
        if(this->price<price)return 1;
        else return 0;
    }
    bool isBookPresent(string name)
    {
        if(this->name==name)return 1; 
        else return 0
    }
}; 
int main()
{
    Book Harrypotter; 
    
}