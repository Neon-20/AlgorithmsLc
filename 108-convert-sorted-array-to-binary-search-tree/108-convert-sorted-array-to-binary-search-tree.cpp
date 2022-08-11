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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode * ans;
        int n = nums.size();
		
        //null node, ancestor node doesn't have a child down this path
        if(!n)
            return nullptr;
        
		// leaf node
        if(n == 1)
         return  ans = new TreeNode(nums[0]);
		 
        // root node
        int mid = (n/2);
        
        ans = new TreeNode(nums[mid]);
        
        
        // left side of binary tree
        vector<int> left(mid);      
        copy(nums.begin(),nums.begin() + mid,left.begin()); 
        
        
        // right side of binary tree
        vector<int> right (n-mid-1);
        copy(nums.begin() + (1+mid) ,nums.end(), right.begin()); 
        
        //cout << *(nums.begin() + (mid)) << " "; 
        
        // recursive building
        ans -> left = sortedArrayToBST(left);
        ans -> right = sortedArrayToBST(right);
        
        return ans;
    }
};