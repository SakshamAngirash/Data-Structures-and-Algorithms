//M1

class Solution {
public:
    vector<TreeNode*> preorder(TreeNode* root,vector<TreeNode*>& ans)
    {
        if(root==NULL) return ans;
        ans.push_back(root);
        preorder(root->left,ans);
        preorder(root->right,ans);
        return ans;
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans; 
        preorder(root,ans);
        int n = ans.size();
        for(int i=0;i<n-1;i++)
        {
            ans[i]->right=ans[i+1];
            ans[i]->left=NULL;
        }

    
    }
};


//M2
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return ; 
        TreeNode* l = root->left; 
        TreeNode* r = root->right; 
        root->left=NULL;
        root->right=NULL;
        flatten(l);
        flatten(r);
        root->right=l; 
        TreeNode*temp = root; 
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        temp->right=r;
        
    }
};

//M3 : morris way 
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* curr = root;
        while(curr!=NULL)
        {
            if(curr->left!=NULL)
            {
                //Save the right
                TreeNode* r=curr->right;
                curr->right=curr->left;

                //finding pred 
                TreeNode* pred = curr->left;
                while(pred->right!=NULL)pred=pred->right;

                //link
                pred->right = r; 
                curr=curr->left;

            }
            else{
                curr=curr->right;
            }

        }
        // deleting all the left parts
        TreeNode* temp = root;
        while(temp->right!=NULL)
        {
            temp->left=NULL;
            temp=temp->right;
        }

        
    }
};