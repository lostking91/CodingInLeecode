/*
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
For example, this binary tree is symmetric:
    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following is not:
    1
   / \
  2   2
   \   \
   3    3
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
 //solution2 https://leetcode.com/discuss/11432/beautiful-recursive-and-iterative-solutions
class Solution {
public:
    bool DFS(TreeNode *left,TreeNode *right)
    {
        if(left==NULL || right==NULL) return left==right;
        if(left->val!=right->val)   return 0;
        return DFS(left->right,right->left)&&DFS(left->left,right->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return 1;
        return DFS(root->left,root->right);
    }
};