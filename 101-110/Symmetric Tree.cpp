/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//recursive (DFS)
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        else
            return helper(root -> left, root -> right);
    }

    bool helper(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL)
            return true;
        else if(left == NULL || right == NULL)
            return false;
        else
            return (left -> val == right -> val) && helper(left -> left, right -> right) && helper(left -> right, right -> left);
    }
};
