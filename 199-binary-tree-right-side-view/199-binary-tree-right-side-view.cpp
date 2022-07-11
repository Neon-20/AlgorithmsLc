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
    vector<int> rightSideView(TreeNode* root) {
        //just print the right side view of binary tree
     vector<int> ans;
        if(root == NULL) return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int qlen=q.size();
            while(qlen-->0){//for each level order trav
                TreeNode *current=q.front();
                q.pop();
                if(qlen==0){
                    ans.push_back(current->val);
                }
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
        }
        return ans;
        }
};





