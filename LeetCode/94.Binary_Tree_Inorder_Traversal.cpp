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
    void inordertraverse(TreeNode* root, vector<int>& ans){
        TreeNode* temp=root;
        if(temp==nullptr) return;
        inordertraverse(temp->left,ans);
        ans.push_back(temp->val);
        inordertraverse(temp->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inordertraverse(root,ans);
        return ans;
    }
};