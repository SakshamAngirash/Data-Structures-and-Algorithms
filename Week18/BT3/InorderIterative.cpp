#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> inOrder(Node* root) {
    stack<Node*> st;
    vector<int> ans;
    Node* node = root;
    while (st.size()>0 || node!=NULL) {
        if(node!=NULL)
        {
            st.push(node); 
            node=node->left;
        }
        else{
            Node* temp = st.top(); 
            st.pop();
            ans.push_back(temp->val);
            node=temp->right;
        }
    }

    return ans;
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    vector<int> ans = inOrder(a);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
