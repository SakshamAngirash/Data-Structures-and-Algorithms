/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr, right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* iop(TreeNode* root) {
        // go left then keep going right
        TreeNode* pred = root->left; 
        while(pred->right) pred = pred->right; 
        return pred;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return NULL;
        if(root->val == key) {
            // case 1: leaf node
            if(root->left == NULL && root->right == NULL) return NULL;

            // case 2: node with 1 child only
            else if(root->left == NULL || root->right == NULL) {
                if(root->left != NULL) return root->left;
                else return root->right;
            }

            // case 3: node with two children
            else if(root->left != NULL && root->right != NULL) {
                // replace the root with its inorder predecessor
                TreeNode* pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        } else if(root->val > key) {
            root->left = deleteNode(root->left, key); // go left
        } else {
            root->right = deleteNode(root->right, key); // go right
        }
        return root;
    }
};
