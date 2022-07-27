class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while (curr) {
            if (curr->left) {
                TreeNode* runner = curr->left;
                while (runner->right != nullptr) runner = runner->right;
                runner->right = curr->right, curr->right = curr->left, curr->left = nullptr;
            }
            curr = curr->right;
        }
    }
};