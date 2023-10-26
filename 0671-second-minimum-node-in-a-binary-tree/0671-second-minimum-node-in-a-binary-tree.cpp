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
    set<int> s;
    void preorder(TreeNode* node){
        if(!node) return;
        s.insert(node->val);
        preorder(node->left);
        preorder(node->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        preorder(root);
        if(s.size() == 1) return -1;
        vector<int> ans (s.begin(),s.end());
        return ans[1];
    }
};