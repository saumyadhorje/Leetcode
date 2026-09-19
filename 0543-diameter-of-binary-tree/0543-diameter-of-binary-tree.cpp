class Solution {
public:

    int height(TreeNode* root) {
        if (root == nullptr) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        int ans = max(lh, rh) + 1;

        return ans;   // missing
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        // only left tree
        int left = diameterOfBinaryTree(root->left);

        // only right tree
        int right = diameterOfBinaryTree(root->right);

        // diameter passing through root
        int withroot = height(root->left) + height(root->right);

        int ans = max(left, max(right, withroot));

        return ans;
    }
};