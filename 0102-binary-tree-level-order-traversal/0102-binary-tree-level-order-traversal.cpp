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
    vector<vector<int>> levelOrder(TreeNode* root) {
//         level order traversal is a bfs
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int sz = q.size();
            vector<int> current;
            for(int i=0;i<sz;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
                current.push_back(node->val);
            }
            ans.push_back(current);
        }
        return ans;
    }
};





