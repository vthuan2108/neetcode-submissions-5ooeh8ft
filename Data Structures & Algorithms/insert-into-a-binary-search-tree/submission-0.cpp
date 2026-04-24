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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *tmp= new TreeNode;
        tmp->val=val;
        tmp->left=tmp->right=NULL;
        if(root==NULL) {
            root=tmp;
        } else {
            if (tmp->val < root->val){
                if(root->left==NULL) root->left=tmp;
                else insertIntoBST(root->left,val);
            }
            else if (tmp->val > root->val){
                if(root->right==NULL) root->right=tmp;
                else insertIntoBST(root->right,val);
            }
                
            }
        return root;
    }
};