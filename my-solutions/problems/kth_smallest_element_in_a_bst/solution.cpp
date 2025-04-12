class Solution {
public:
    void inorder(TreeNode* root, int& k, int& result) {
        if (root == nullptr) return;

        inorder(root->left, k, result);

        k--;
        if (k == 0) {
            result = root->val;
            return;
        }

        inorder(root->right, k, result);
    }

    int kthSmallest(TreeNode* root, int k) {
        int result = -1;
        inorder(root, k, result);
        return result;
    }
};
