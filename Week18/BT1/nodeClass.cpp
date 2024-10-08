#include<iostream>

using namespace std; 

class Node{ //this is a tree node
    public: 
    int val; 
    Node* left; 
    Node* right; 
    Node(int val)
    {
        this->val = val ; 
        this->left = NULL; 
        this->right = NULL;
    }
}; 
int maxinTree(Node* root)
{
    if(root==NULL) INT_MIN;
    return max(root->val,max(maxinTree(root->left),maxinTree(root->right)));
}
int main()
{
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left = b ; 
    a->right = c; 
    b->left = d; 
    b->right= e; 
    c->left=f; 
    c->right=g;
    cout<<maxinTree(a);
    return 0 ; 

}