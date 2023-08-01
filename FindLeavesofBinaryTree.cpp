/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    TreeNode* fun(TreeNode* root, std::vector<int>& arr) {
        if (root == nullptr) {
            return nullptr;
        }
        if (root->left == nullptr && root->right == nullptr) {
            arr.push_back(root->val);
            return nullptr;
        }
        root->left = fun(root->left, arr);
        root->right = fun(root->right, arr);
        return root;
    }

    vector<vector<int>> findLeaves(TreeNode * root) {
        // write your code here
        vector<vector<int>> res;
        while(root!=nullptr){
            vector<int> arr;
            root = fun(root,arr);
            res.push_back(arr);
        }
        return res;
    }
};
