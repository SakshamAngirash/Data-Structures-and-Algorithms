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
void displayTree(Node* root) 
{
    if(root==NULL) return ; 
    cout<<root->val<<" "; 
    displayTree(root->left); 
    displayTree(root->right);
}
int sumTreeNode(Node* root)
{ 
    if(root==NULL) return 0;  
    int ans = root->val+sumTreeNode(root->left)+sumTreeNode(root->right);
    return ans;
}

int sizeofBT(Node* root)
{
    if(root==NULL)return 0 ; 
    return  1 + sizeofBT(root->left)+sizeofBT(root->right);
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
    displayTree(a);
    cout<<endl<<sumTreeNode(a)<<endl;
    cout<<sizeofBT(a);
    return 0 ; 

}