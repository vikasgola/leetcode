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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;

        if(root->val < key){
            root->right = deleteNode(root->right, key);
            return root;
        }else if(root->val > key){
            root->left = deleteNode(root->left, key);
            return root;
        }

        if(!root->left){
            TreeNode* right = root->right;
            delete root;
            return right;
        }
        if(!root->right){
            TreeNode* left = root->left;
            delete root;
            return left;
        }

        TreeNode *succparent = root, *succ = root->right;
        while(succ->left){
            succparent = succ;
            succ = succ->left;
        }

        if(succparent == root){
            succparent->right = succ->right;
        }else{
            succparent->left = succ->right;
        }

        root->val = succ->val;

        delete succ;
        return root;
    }
};