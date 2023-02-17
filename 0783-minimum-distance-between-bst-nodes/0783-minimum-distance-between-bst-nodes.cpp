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
    vector<int> treeNode;
    void inorder(TreeNode* root){
         if(root == NULL){
            return;
        }
        
        inorder(root->left);
        treeNode.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
       inorder(root);
        int mindist = INT_MAX;
        for(int i=1;i<treeNode.size();i++){
            mindist = min(mindist,treeNode[i] - treeNode[i-1]);
        }
        return mindist;
        
    }
};