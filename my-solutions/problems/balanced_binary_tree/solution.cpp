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
    int height(TreeNode* root)
    {
        if(root==nullptr)
        return 0;
        int heightleft=height(root->left);
        int heightright=height(root->right);

        return 1+max(heightleft,heightright);
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==nullptr)
        return true;
        
        int heightleft=height(root->left);
        int heightright=height(root->right);

        if(abs(heightleft-heightright)>1)
        return false;
        
        return isBalanced(root->left)&&isBalanced(root->right);
    }
};