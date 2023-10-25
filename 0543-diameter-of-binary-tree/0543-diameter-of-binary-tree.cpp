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
    int ans=0;
   int height(TreeNode* root){
       if(!root) return 0;
//        left height and right height
       int leftHeight = height(root->left);
       int rightHeight = height(root->right);
       ans = max(ans,1+leftHeight+rightHeight);
       return 1+max(leftHeight,rightHeight);
   } 
    int diameterOfBinaryTree(TreeNode* root) {
        //diameter of a binary tree
        if(!root) return 0;
        height(root);
        return ans-1;
    }
};
//edges ko count krna hai idhar



