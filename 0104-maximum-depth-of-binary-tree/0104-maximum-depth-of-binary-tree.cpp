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
    int maxDepth(TreeNode* root) {
       //using bfs we have as
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        while(!q.empty()){
            ++depth;
            int sz = q.size();
            for(int i=0;i<sz;i++){
            TreeNode* node = q.front(); 
            q.pop();
            if(node->left!=nullptr){
                q.push(node->left);
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
        }
        }
        return depth;
    }
};



