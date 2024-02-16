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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> trav;
        s.push(root);
        if(!root) return vector<int>();
        while(!s.empty()){
            root = s.top(), s.pop();
            if(root)
                trav.push_back(root->val);
            if(root->left) s.push(root->left);
            if(root->right) s.push(root->right);
        }
        reverse(trav.begin(), trav.end());
        return trav;
    }
};