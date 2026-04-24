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
// khoảng cách xa nhất giữa 2 
class Solution {
public:
    int diameter =0;
    int depth(TreeNode* root){
        if(root == NULL) return 0;

        int left = depth(root->left);
        int right = depth(root->right);
        // tính diameter : kc max giữa 2 node bki trong cây con
        diameter = max(diameter, left + right);
        //trả depth node cha cây con
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
      depth(root);
      return diameter;
    }
    
};
