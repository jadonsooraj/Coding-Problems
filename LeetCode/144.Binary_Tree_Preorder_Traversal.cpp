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
    void preTraverse(TreeNode * root, vector<int>& ans){
        TreeNode* temp=root;

        if(temp==nullptr) return;
        ans.push_back(temp->val);
        preTraverse(temp->left,ans);
        preTraverse(temp->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preTraverse(root,ans);
        
        return ans;
    }
};