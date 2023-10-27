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
    bool helper(TreeNode* node,long mn,long mx){
        if(!node) return true;
        if(node->val > mn and node->val < mx){
    return helper(node->left,mn,node->val) and helper(node->right,node->val,mx);
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        //validate a bst
        return helper(root,LONG_MIN,LONG_MAX);
    }
};





