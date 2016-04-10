/*
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as a binary tree in which the 
depth of the two subtrees of every node never differ by more than 1.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)  return 0;
        return max(height(root->right),height(root->left))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        return isBalanced(root->right) && isBalanced(root->left) && abs(height(root->right)-height(root->left))<=1;
    }
};