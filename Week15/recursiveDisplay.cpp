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

void display(Node* head)
{
    
    cout<<head->val<<endl; 
    if(head->next==NULL) return;//base case
    display(head->next);
}

int size(Node *head)
{
    Node* temp=head; 
    int count = 0 ; 
    while(temp!=NULL)
    {
        count++; 
        temp = temp -> next;
    }
    return count;
}
int main()
{
    Node* a = new Node(10); 
    Node* b = new Node(20); 
    Node* c = new Node(30); 
    Node* d = new Node(40); 

    a->next=b; 
    b->next=c; 
    c->next=d; 

    display(a); //head node address only required to print the whole LL
    cout<<size(a);

}