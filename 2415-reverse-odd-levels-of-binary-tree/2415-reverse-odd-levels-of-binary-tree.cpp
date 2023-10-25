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
    TreeNode* reverseOddLevels(TreeNode* root) {
        //reverse the values at odd level
        if(root == nullptr) return root;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> values;
        int level = 0 ;
        while(!q.empty()){
            int sz = q.size();
            vector<int> temp; 
            // doing level order that's why
            for(int i=0;i<sz;i++){
                TreeNode* node = q.front();
                q.pop();
                if(level%2){
                    node->val = values[sz-i-1];
                }
                if(node->left!=nullptr){
                    q.push(node->left);
                    temp.push_back(node->left->val);
                } if(node->right!=nullptr){
                    q.push(node->right);
                    temp.push_back(node->right->val);
                }   
            }
            values = temp;
            level++;
        }
        return root;
    }
};







