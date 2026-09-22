class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == nullptr || root == p || root == q) {
            return root;
        }

        TreeNode* leftans = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightans = lowestCommonAncestor(root->right, p, q);

        if (rightans == nullptr && leftans != nullptr)
            return leftans;

        if (leftans == nullptr && rightans != nullptr)
            return rightans;

        if (leftans != nullptr && rightans != nullptr)
            return root;

        return nullptr;
    }
};