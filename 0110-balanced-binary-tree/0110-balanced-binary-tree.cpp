class Solution {
public:

    pair<bool, int> isBalancedFast(TreeNode* root) {

        if (root == nullptr) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        //first me balance dekhenge
        bool leftAns = left.first;
        bool rightAns = right.first;

        //second me height calc hogi
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;

        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff) {
            ans.first = true;
        }
        else {
            ans.first = false;
        }

        return ans;
    }

    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};