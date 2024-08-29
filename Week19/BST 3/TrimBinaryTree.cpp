/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void trim(TreeNode* root, int lo, int hi)
    {
        if(root==NULL)return; 
        while(root->left!=NULL)
        {
            if(root->left->val<lo) root->left = root->left->right;
            else if(root->left->val>hi) root->left= root->left->left; 
            else break; 
        }
        while(root->right!=NULL)
        {
            
            if(root->right->val>hi) root->right = root->right->left;
            else if(root->right->val<lo) root->right = root->right->right;
            else break; 
        }
        trim(root->left,lo,hi); 
        trim(root->right,lo,hi);

        
    }
    TreeNode* trimBST(TreeNode* root, int lo, int hi) {
        TreeNode* dummy = new TreeNode(INT_MAX); 
        dummy->left = root; 
        dummy->right = NULL ; //No need
        trim(dummy,lo,hi);
        return dummy->left;
    }
};