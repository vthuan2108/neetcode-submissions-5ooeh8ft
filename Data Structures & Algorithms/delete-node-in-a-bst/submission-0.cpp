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
    TreeNode* findMin(TreeNode* root){
        while( root->left != NULL){
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){ return NULL;} 
        if(key< root->val){ root->left= deleteNode(root->left, key);}
        else if(key > root->val){ root->right= deleteNode(root->right, key);}
        else { // tim thay node can xoa
            //case1: ko co con
            if(root->left==NULL && root->right==NULL) {
                delete root;
                return NULL;
            }
            // case 2: 1 con
            if(root->left == NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            if(root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            //case 3: co nhieu node con
            TreeNode *tmp= findMin(root->right); // tim node nho nhat ben phai->copy gia tri->delete node nho nhat do
            root->val=tmp->val;
            root->right= deleteNode(root->right, tmp->val);
        }
        return root;
    }
};
