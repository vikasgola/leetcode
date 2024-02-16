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
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
private:
    int depth(TreeNode* root){
        if(!root) return 0;
        int ldepth = depth(root->left);
        if(ldepth == -1) return -1;
        int rdepth = depth(root->right);
        if(rdepth == -1) return -1;
        if(abs(ldepth-rdepth) > 1) return -1;
        return 1+max(ldepth, rdepth);
    }
};