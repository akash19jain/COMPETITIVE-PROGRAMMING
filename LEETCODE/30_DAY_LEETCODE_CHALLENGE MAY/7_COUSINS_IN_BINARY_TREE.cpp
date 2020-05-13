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
	TreeNode* Depth(TreeNode* root, int val, int depth, int& level)
	{
		if (!root)
			return nullptr;
		if ((root->left && root->left->val == val) ||
		        (root->right && root->right->val == val))
		{
			level = depth;
			return root;
		}

		TreeNode* left = Depth(root->left, val, depth + 1, level);
		if (left) return left;

		TreeNode* right = Depth(root->right, val, depth + 1, level);
		if (right) return right;

		return nullptr;
	}
public:
	bool isCousins(TreeNode* root, int x, int y)
	{
		int xd = -1, yd = -1;
		TreeNode *xp = Depth(root, x, 0, xd);
		TreeNode *yp = Depth(root, y, 0, yd);
		if (xd != yd || xp == yp)
			return false;
		return true;
	}
};