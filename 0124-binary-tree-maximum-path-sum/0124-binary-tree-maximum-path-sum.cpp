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
    int ans=INT_MIN;
    int dfs(TreeNode* node){
        if(!node) return 0;
        int left = dfs(node->left);
        int right = dfs(node->right);
        int leftMax = max(0,left);
        int rightMax = max(0,right);
//         with split
        ans = max(ans,leftMax+rightMax+node->val);
        return max(0,max(left,right)+node->val);
    }
    
    int maxPathSum(TreeNode* root) {
        //Binary Tree max path sum
        //recursive dfs approach
        dfs(root);
        return ans;
    }
};