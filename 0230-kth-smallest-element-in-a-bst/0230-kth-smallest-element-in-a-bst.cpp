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
//preorder = root -> left -> right
class Solution {
public:
    void preOrder(TreeNode* node,vector<int>& ans){
        if(!node) return;
        ans.push_back(node->val);
        preOrder(node->left,ans);
        preOrder(node->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
       vector<int> ans;
       preOrder(root,ans);
       sort(begin(ans),end(ans));
       return ans[k-1];
    }
};


// Kth smallest element in BST