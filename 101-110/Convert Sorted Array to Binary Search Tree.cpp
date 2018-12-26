/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        vector<int> leftnums(nums.begin(), nums.begin() + mid);
        vector<int> rightnums(nums.begin() + mid + 1, nums.end());
        root -> left = sortedArrayToBST(leftnums);
        root -> right = sortedArrayToBST(rightnums);

        return root;
    }
};
