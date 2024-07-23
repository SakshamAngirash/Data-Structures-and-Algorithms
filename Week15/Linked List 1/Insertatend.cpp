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
void revDisplay(Node* head) //recursion 
{
    if(head==NULL) return ;
    revDisplay(head->next); 
    cout<<head->val<<" ";

}
void insertatEnd(Node *head,int val)
{ 
    Node* temp = new Node(val);
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=temp;
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

    insertatEnd(a,50);
    revDisplay(a);




}