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
//     Now using dfs

vector<int> rightSideView(TreeNode* root) {
    if(!root) return {};
    queue<TreeNode*> q;
    q.push(root);
    vector<int> show;
    while(!q.empty()){
        int sz = q.size();
        for(int i=0;i<sz;i++){
            TreeNode* node=q.front();
            q.pop();
            if(i == sz-1) show.push_back(node->val);
            if(node->left) q.push(node->left); 
            if(node->right) q.push(node->right);
        }
    }
    return show;
   }
};





