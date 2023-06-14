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
    void inorder(TreeNode* node,vector<int> &in){
        if(!node) return;
        inorder(node->left,in);
        in.push_back(node->val);
        inorder(node->right,in);
    }
    int getMinimumDifference(TreeNode* root) {
        //minimumdifference in Treenode in *root
        int ans=INT_MAX;
        vector<int> in;
        inorder(root,in);
        for(int i=0;i<in.size()-1;i++){
            ans=min(ans,abs(in[i]-in[i+1]));
        }
        return ans;
    }
};





