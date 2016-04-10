/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from 
left to right, level by level from leaf to root).
For example:
Given binary tree {3,9,20,#,#,15,7},
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]
confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > retVal;
        levelOrder(root,retVal,0);
        reverse(retVal.begin(),retVal.end());
        return retVal;
    }
    void levelOrder(TreeNode* root,vector<vector<int>> &v,int currLevel)
    {
        if(root==NULL) return;
        if(v.empty()||currLevel>(v.size()-1)) v.push_back(vector<int>());
        v[currLevel].push_back(root->val);
        levelOrder(root->left,v,currLevel+1);
        levelOrder(root->right,v,currLevel+1);
    }
};