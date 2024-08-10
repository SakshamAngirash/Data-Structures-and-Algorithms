#include<iostream>
using namespace std; 
class Node{ //user defined datatype
    public:
    int val; 
    Node* next; 
    Node(int val)
    {
        this->val=val; 
        this->next=NULL; 
    }
}; 

class Queue{ //user defined datastructure
    public:
    Node* head; 
    Node* tail; 
    int size;
    Queue()
    {
        head=tail=NULL; 
        size=0;
    }
    void push(int val)
    {
        Node* temp=new Node(val);
        if(size==0) head = tail = temp ; 
        else {
            tail->next= temp; 
            tail=temp ; 
        }
        size++;
    }
    void pop()
    {
        if(size==0)cout<<"List is empty "<<endl; 
        else if (size>=1){ 
            head = head->next;
            size--;}
    }
    int front()
    {
        return head->val;
    }
    void display()
    {
        Node* temp = head; 
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    Queue q; 
    q.push(10); 
    q.push(20); 
    q.push(30);
    
    q.display();
    q.pop(); 
    q.display();
}