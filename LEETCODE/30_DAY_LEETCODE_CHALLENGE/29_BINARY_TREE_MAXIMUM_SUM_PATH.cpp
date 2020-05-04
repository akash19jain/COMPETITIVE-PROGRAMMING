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
class Solution
{
	int maxPath(TreeNode *root, int &re)
	{
		if (!root)
			return 0;
		int l = maxPath(root->left, re);
		int r = maxPath(root->right, re);

		if (l < 0)
			l = 0;
		if (r < 0)
			r = 0;
		if (l + r + root->val > re)
			re = l + r + root->val;

		return root->val += max(l, r);

	}
public:
	int maxPathSum(TreeNode* root)
	{
		int max = INT_MIN;
		maxPath(root, max);
		return max;
	}
};