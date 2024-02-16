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
    void _inorderTraversal(TreeNode* root, vector<int> &out) {
        if(!root) return;
        _inorderTraversal(root->left, out);
        out.push_back(root->val);
        _inorderTraversal(root->right, out);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out;
        _inorderTraversal(root, out);
        return out;
    }
};