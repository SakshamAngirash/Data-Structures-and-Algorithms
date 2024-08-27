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
    int levels(TreeNode* root)
    {
        if(root == nullptr) return 0; 
        return 1 + max(levels(root->left), levels(root->right)); 
    }

    void nthlevel(TreeNode* root, int current, int level, vector<int>& v)
    {
        if(root == nullptr) return; 
        if(current == level) 
        {
            v.push_back(root->val); 
            return;
        }
        nthlevel(root->left, current + 1, level, v);
        nthlevel(root->right, current + 1, level, v);
    }

    void populateLevelOrder(TreeNode* root, int n, vector<vector<int>>& ans)
    {
        for (int i = 1; i <= n; i++)
        {
            vector<int> v;
            nthlevel(root, 1, i, v);
            ans.push_back(v);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; 
        if (root == nullptr) return ans;
        
        int n = levels(root);
        populateLevelOrder(root, n, ans);
        return ans;
    }
};
