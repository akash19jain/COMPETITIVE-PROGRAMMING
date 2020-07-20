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
public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root == nullptr)
		{
			return NULL;
		}
		else
		{
			TreeNode* inv_left = invertTree(root->left);
			TreeNode* inv_right = invertTree(root->right);
			root->right = inv_left;
			root->left = inv_right;
			return root;
		}
	}
};