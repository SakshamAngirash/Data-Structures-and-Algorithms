// lowest common ancestor 
class Solution {
public:
    bool existsinTree(TreeNode* root, TreeNode* target) {
        if (root == nullptr) return false; 
        if (root == target) return true; 
        return existsinTree(root->left, target) || existsinTree(root->right, target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q) return root; 
        
        bool pInLeft = existsinTree(root->left, p);
        bool qInLeft = existsinTree(root->left, q);
        
        if (pInLeft != qInLeft) return root; // p and q are in different subtrees
        
        TreeNode* nextRoot = pInLeft ? root->left : root->right;
        return lowestCommonAncestor(nextRoot, p, q);
    }
};
