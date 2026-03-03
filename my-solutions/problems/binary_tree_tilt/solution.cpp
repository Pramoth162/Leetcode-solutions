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
 int diff=0;
    int findSum(TreeNode* root) {
      
      if(root==NULL)
      return 0;
      int leftsum=findSum(root->left);
      int rightsum=findSum(root->right);

      diff+=abs(leftsum-rightsum);
      return leftsum+rightsum+root->val;
    }
    int findTilt(TreeNode* root)
    {
        findSum(root);
        return diff;
    }
};