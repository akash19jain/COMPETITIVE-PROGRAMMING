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
	TreeNode* res;

	void dfs(TreeNode* node, int val) {
		if (!node) {
			return;
		}

		if (node -> val == val) {
			res = node;
			return;
		}

		dfs(node -> left, val);
		dfs(node -> right, val);
	}

	TreeNode* searchBST(TreeNode* root, int val) {
		dfs(root, val);

		return res;
	}
};