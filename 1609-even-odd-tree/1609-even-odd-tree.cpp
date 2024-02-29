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
    bool isEvenOddTree(TreeNode* root) {
        if(root == nullptr)
            return false;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
           //iske saath khelne k liye chahiye hoga thats it
            int size = q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                temp.push_back(front->val);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            if(level == 0 or level%2 == 0){
                for(int i=0;i<temp.size();i++){
                    if(temp[i]%2==0){
                        return false;
                    }
                }
                for(int i=0;i<temp.size()-1;i++){
                    if(temp[i]>=temp[i+1]){
                        return false;
                    }
                }
            }
            else{
                for(int i=0;i<temp.size();i++){
                    if(temp[i]%2!=0){
                        return false;
                    }
                }
                for(int i=0;i<temp.size()-1;i++){
                    if(temp[i]<=temp[i+1]){
                        return false;
                    }
                }
            }
            level++;
        }
        return true;
    }
};
//even index -> odd values increasing
//odd index -> even values decreasing






