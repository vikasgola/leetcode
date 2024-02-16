/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*> process;
        string res = "";
        process.push(root);
        while(process.size() > 0){
            auto t = process.front(); process.pop();
            res += (t == NULL ? "#" : to_string(t->val)) + ",";
            if(t != NULL){process.push(t->left);process.push(t->right);}
        }
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        string curr = "";
        vector<TreeNode*> nodes;
        for(auto &c: data){
            if(c == ','){
                TreeNode* t = NULL;
                if(curr != "#") t = new TreeNode(stoi(curr));
                curr = "";
                nodes.push_back(t);
            }else curr += c;
        }
        queue<TreeNode*> process;
        int i = 0;
        process.push(nodes[i++]);
        while(process.size() > 0 ){
            auto t = process.front(); process.pop();
            if(t == NULL) continue;
            t->left = nodes[i++]; t->right = nodes[i++];
            process.push(t->left);process.push(t->right);
        }
        return nodes[0];
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));