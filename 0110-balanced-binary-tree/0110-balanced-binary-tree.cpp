class Solution {
public:

    int height(TreeNode* root) {
        if (root == nullptr) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        int diff = abs(height(root->left) - height(root->right));

        if (left && right && diff <= 1)
            return true;
        else
            return false;
    }
};