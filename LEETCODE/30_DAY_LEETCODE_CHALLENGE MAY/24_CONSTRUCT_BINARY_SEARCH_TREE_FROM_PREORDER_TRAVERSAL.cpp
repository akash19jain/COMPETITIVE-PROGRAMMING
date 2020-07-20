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

	int count = 0;
	TreeNode* bstFromPreorder(vector<int>& preorder)
	{
		return bst1FromPreorder(preorder, INT_MAX);
	}

	TreeNode* bst1FromPreorder(vector<int>& A, int bound = INT_MAX) {
		if (count == A.size())
			return NULL;
		if (A[count] > bound)
			return NULL;
		TreeNode* root = new TreeNode(A[count++]);
		root->left = bst1FromPreorder(A, root->val);
		root->right = bst1FromPreorder(A, bound);
		return root;
	}
};