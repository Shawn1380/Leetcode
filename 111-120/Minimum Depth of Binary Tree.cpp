/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//DFS
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        else if(root -> left == NULL)
            return minDepth(root -> right) + 1;
        else if(root -> right == NULL)
            return minDepth(root -> left) + 1;
        else
            return min(minDepth(root -> left), minDepth(root -> right)) + 1;
    }
};

//BFS
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int i = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            i++;
            int size = q.size();
            while(size--)
            {
                auto p = q.front();
                q.pop();
                if(p -> left != NULL)
                    q.push(p -> left);
                if(p -> right != NULL)
                    q.push(p -> right);
                if(p -> left == NULL && p -> right == NULL)
                    return i;
            }
        }
    }
};
