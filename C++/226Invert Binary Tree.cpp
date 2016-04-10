/*
Invert a binary tree.
     4
   /   \
  2     7
 / \   / \
1   3 6   9
to
     4
   /   \
  7     2
 / \   / \
9   6 3   1
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
//Solution (1):
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
//Solution (2):
class Solution {
public:
	TreeNode* inverTree(TreeNode* root){
		if(!root)	return root;
		
		queue<TreeNode *> q;
		TreeNode *temp, *cur;
		q.push(root);
		while(!q.empty()){
			cur=q.front();
			q.pop();
			temp=cur->left;
			cur->left=cur->right;
			cur->right=temp;
			if(cur->left!=NULL)
				q.push(cur->left);
			if(cur->right!=NULL)
				q.push(cur->right);
		}
		return root;

	}