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
      if(root == nullptr) return 0;
        
       queue<TreeNode*> q;
        int ans=0;
        q.push(root);
        while(!q.empty()){
            int breadth=q.size();
            ans++;
            for(int i=0;i<breadth;i++){
                TreeNode* parent=q.front();
                q.pop();
            
            if(parent->left) q.push(parent->left);
            if(parent->right) q.push(parent->right);
            if(parent->left==NULL and parent->right==NULL)
                return ans;
            }
        }
        return ans;
    }
};