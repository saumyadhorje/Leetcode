class Solution {
public:
    void solve(TreeNode* root, int level, vector<int>& res) {
        if (root == nullptr) return;

        if (level == res.size()) {
            res.push_back(root->val);
        }

        solve(root->right, level + 1, res);
        solve(root->left, level + 1, res);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        solve(root, 0, res);
        return res;
    }
};