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
    int result = 0;
    int countPairs(TreeNode* root, int distance) {
        dfs(root,distance);
        return result;
    }
    vector<int> dfs(TreeNode* node,int d){
        if(!node) return{};
        if(!node->left and !node->right) return{1};
        auto left = dfs(node->left,d);
        auto right = dfs(node->right,d);
        for(auto x:left){
            for(auto y:right){
                if(x+y<=d) result++;
            }
        }
        vector<int> v;
        for(auto x:left) v.push_back(x+1);
        for(auto x:right) v.push_back(x+1);
        return v;
    }
};




