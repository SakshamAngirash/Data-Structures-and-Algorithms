#include<iostream>
using namespace std; 
class Node{
    public:
    int val; 
    Node* next; 
    Node(int val)
    {
        this->val=val; 
        this->next=NULL; 
    }
}; 
class Linkedlist{ 
    public: 
    Node* head; 
    int size;
    Linkedlist()
    {
        head = NULL ; 
        size = 0 ; 
    }
    void insertAtEnd(int val)
    {
        Node* t = new Node(val); 
        if(size==0) head = t;
        else {
        Node* temp = head; 
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = t; 
        }
        size++;
    }
    void insertAtBeg(int val)
    {
        Node* t = new Node(val); 
        if(size==0) head = t;
        else{
            t->next=head; 
            head = t; 
        }
        size++;  
    }

    void insertAt (int idx, int val)
    {
        if(idx<0||idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtBeg(val); 
        else if(idx==size)insertAtEnd(val);
        else{Node* t = new Node(val); 
        Node* temp = head; 
        for (int i = 0; i <= idx-1; i++)
        {
            temp = temp->next; 
        }
        t->next= temp->next; 
        temp->next=t; 
        size++;
        }
       
    }
    int getAtIdx(int idx){
        if(idx<0||idx>size){
            cout<<"Invalid Index"<<endl;
            return -1;}
        else if(idx==0) return head->val; 
        else{
        Node *temp = head; 
        
        for (int i = 0; i <= idx; i++)
        {
            temp=temp->next;
        }
        return temp->val;
        }
    }

    void deleteAtHead()
    {
        if(size==0)cout<<"List is empty "<<endl; 
        else if (size>=1){ 
            head = head->next;
            size--;}
        
    }
    void deleteAtTail()
    {
        if(size==0)cout<<"List is empty"<<endl; 
        else if (size>=1)
        {
            Node* temp  = head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            size--;
        }
        
    }

    void deleteAtIdx(int idx)
    {
        if(idx<0||idx>=size)
        {cout<<"List is empty"<<endl;
        return; }
        if(idx==0){
            deleteAtHead();
            return;
        }
        else if (idx==size-1){
            deleteAtTail();
            return;
        }
        else
        {
            Node* temp  = head;
            int i = 0 ;
            while(i<=idx-1)
            {
                temp=temp->next;
                i++;
            }
            temp->next=temp->next->next;
            size--;
        }
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
    Linkedlist ll; 
    ll.insertAtEnd(10); 
    ll.insertAtEnd(20);
    ll.insertAtEnd(30); 
    ll.display();
    ll.deleteAtHead(); 
    ll.display();
    ll.deleteAtHead(); 
    ll.deleteAtHead(); 
    ll.display();
    
}