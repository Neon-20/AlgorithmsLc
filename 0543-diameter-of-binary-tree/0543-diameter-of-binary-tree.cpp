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
    int ans = 0;
    int height(TreeNode* node){
        if(!node) return 0;
        int left = height(node->left);
        int right = height(node->right);
        ans = max(ans,1+left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        height(root);
        return ans-1;
    }
};
//edges ko count krna hai idhar



