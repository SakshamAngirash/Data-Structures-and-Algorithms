#include<iostream>
#include<vector>
using namespace std; 
class queue{
    public: 
    vector<int>arr; 
    int front ; 
    int back ; 
    int size ;
    queue(int val){
        front = 0 ; 
        back = 0 ; 
        size = 0 ; 
        vector<int>v(val);
        arr = v; 
         
    }
    void push(int val)
    {
        
         cout<<"Overflow"; 
        else {
        arr[back]=val; 
        back++;
        size++;}
    }
    void pop()
    {
        if(size==0) cout<<"Queue is empty";
        else{
        front++; 
        size--;}
    }
    int top()
    {
        return arr[front];
    }
    void display()
    {
        for (int i = front; i < back; i++)
        {
            cout<<arr[i]<<" "; 
        }
        
    }

    

}; 

int main ()
{
    queue q(5); 
    q.push(10); 
    q.push(20); 
    q.push(30);
    cout<<q.size<<endl;
    cout<<q.top()<<endl;
    q.display();

}