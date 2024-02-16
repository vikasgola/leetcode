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
    void _preorderTraversal(TreeNode* root, vector<int> &trav){
        if(!root) return;
        trav.push_back(root->val);
        _preorderTraversal(root->left, trav);
        _preorderTraversal(root->right, trav);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> trav;
        _preorderTraversal(root, trav);
        return trav;
    }
};