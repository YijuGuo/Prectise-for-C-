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
    vector<int> printFromTopToBottom(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);

        while (q.size()) {
            //temp t 
            auto t = q.front();
            q.pop();
            res.push_back(t->val);
            if (t->left) q.push(t->left);
            if (t->right) q.push(t->right);
        }

        return res;
    }
};

class Solution {
public:
    vector<int> printFromTopToBottom(TreeNode* root) {
        vector<int> res;
        if(!root)return false;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            auto t = q.front();
            q.pop();
            res.push_back(t->val);
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
        }
        return res;
    }
};