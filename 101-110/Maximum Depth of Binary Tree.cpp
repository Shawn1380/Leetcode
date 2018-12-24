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
    int maxDepth(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        else
            return max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
    }
};

//BFS
class Solution {
public:
    int maxDepth(TreeNode *root)
    {
        if(root == NULL)
            return 0;

        int res = 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            res++;
            for(int i = 0, n = q.size(); i < n; i++)
            {
                auto p = q.front();
                q.pop();
                if(p -> left != NULL)
                    q.push(p -> left);
                if(p -> right != NULL)
                    q.push(p -> right);
            }
        }
        return res;
    }
};
