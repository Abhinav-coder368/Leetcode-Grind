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
    
    void fun(TreeNode* root1,vector<int> &ans){
        if(root1==NULL){
            return;
        }
            if(root1->left==NULL and  root1->right == NULL){
                ans.push_back(root1->val);
            }
            // if(root1->left!=NULL )
                fun( root1->left,ans);
            
            // if(root1->right != NULL)
                fun(root1-> right,ans);
            
        
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans,ans1;
        fun(root1,ans);
        fun(root2,ans1);
        
        return ans==ans1;
    }
};