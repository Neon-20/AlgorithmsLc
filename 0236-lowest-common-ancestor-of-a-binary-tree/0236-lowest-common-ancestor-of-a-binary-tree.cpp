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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//    if we move from the top root and reach the children
//    we find root
    if(root == nullptr || root == p || root == q) return root;
     TreeNode* left = lowestCommonAncestor(root->left,p,q);
     TreeNode* right = lowestCommonAncestor(root-> right,p,q);
     if(left!=NULL and right!=NULL) return root;
     if(left!=NULL) return left;
     return right;
    }
};








