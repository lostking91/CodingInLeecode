/*Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest
leaf node.
https://leetcode.com/problems/maximum-depth-of-binary-tree/

https://leetcode.com/discuss/51958/8ms-recursive-bfs-c-solutions
https://leetcode.com/discuss/57701/a-8-ms-bfs-c-solution
https://leetcode.com/discuss/58817/c-8ms-dfs-and-bfs-solutions
https://leetcode.com/discuss/68166/a-8ms-accepted-solution
http://www.myexception.cn/arithmetic/1990078.html
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
// solution 1 
//I am not sure whether this one can be called "DFS".
// so I only call it "recursive".
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        else
            return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
//Well, you may also solve it using a level-order traversal (BFS) with a queue.
class Solution {
public:
    int maxDepth(TreeNode* root) {
		int depth=0;
		if(!root) return depth;
		queue<TreeNode*> level;
		level.push(root);
		while(!level.empty()){
			depth++;
			int n=level.size();
			for(int i=0;i<n;i++){
				TreeNode* node=level.front();
				level.pop();
				if(node->left) level.push(node->left);
				if(node->right) level.push(node->right);
			}
		}
		return depth;
    }
};