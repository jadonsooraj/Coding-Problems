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
    void traverse(TreeNode* root, vector<int>& ans){
        TreeNode* temp=root;
        if(temp==nullptr) return;
        traverse(temp->left,ans);
        traverse(temp->right,ans);
        ans.push_back(temp->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root,ans);
        return ans;
    }
};