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
    int minDepth(TreeNode* root) {
      //Bfs works better here as solution
        if(root == nullptr) return 0;
         if(root->left == nullptr and root->right!=nullptr){
           return 1+minDepth(root->right); 
        }
       else if(root->right == nullptr and root->left!=nullptr){
           return 1+minDepth(root->left); 
        }
       else{
           return 1+min(minDepth(root->left),minDepth(root->right));
       }
    }
};