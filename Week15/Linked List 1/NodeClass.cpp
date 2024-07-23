#include<iostream>
using namespace std; 

class Node
{
    public:
    int val; 
    Node* next; 
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
}; 
int main()
{
    Node a(10); 
    Node b(20); 
    Node c(30); 
    Node d(40); 

    //forming a link list
    a.next=&b;
    b.next=&c;
    c.next=&d;

    // Node* ptr = &b; 
    // cout<<ptr->val<<endl;
    // a hv the access of b 
    cout<<(a.next)->val<<endl;

    // a se d access
    cout<<(((a.next)->next)->next)->val<<endl;

    //printing the list using for loop 
    Node temp = a; 
    while(1)
    {
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = (*(temp.next)); 
    }


    // d.next=NULL;
}