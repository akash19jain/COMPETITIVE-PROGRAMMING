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
	bool solve(TreeNode* root, vector<int>&arr, int n, int index)
	{
		if (root == nullptr)
			return (n == 0);

		if (index >= n)
			return false;
		if ((root->left == nullptr && root->right == nullptr) && (root->val == arr[index]) && (index == n - 1))
			return true;

		return ((index < n) && (root->val == arr[index]) && (solve(root->left, arr, n, index + 1) || solve(root->right, arr, n, index + 1) ));
	}
	bool isValidSequence(TreeNode* root, vector<int>& arr)
	{
		if (solve(root, arr, arr.size(), 0))
			return true;
		return false;
	}
};