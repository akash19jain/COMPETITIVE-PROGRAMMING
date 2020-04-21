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
     vector<int> dfs(TreeNode* root, int& res)
    {
        if(root == nullptr)
            return {0,0};
        auto l=dfs(root->left, res);
        auto r=dfs(root->right,res);

        int path=max(l[0],l[1])+1+max(r[0],r[1]);
        res=max(res,path);
        return {max(l[0],l[1])+1,1+max(r[0],r[1])};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
        
        int ans=0;
        dfs(root,ans);
        return ans-1;
        
       
    }
};