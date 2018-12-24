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

//BFS
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) 
            return true;
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push(make_pair(root->left, root->right));
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            if(p.first == NULL && p.second == NULL) 
                continue;
            if(p.first == NULL || p.second == NULL) 
                return false;
            if(p.first->val != p.second->val) 
                return false;
            q.push(make_pair(p.first->left, p.second->right));
            q.push(make_pair(p.first->right, p.second->left));
        }
    return true;
    }
};