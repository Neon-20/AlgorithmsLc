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
   
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return {};
      queue<TreeNode*> q;
        q.push(root);
        priority_queue<int> pq;
        while(!q.empty()){
            TreeNode* node = q.front();
            pq.push(node->val);
            q.pop();
            if(pq.size()>k) pq.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        return pq.top();
    }
};


// Kth smallest element in BST