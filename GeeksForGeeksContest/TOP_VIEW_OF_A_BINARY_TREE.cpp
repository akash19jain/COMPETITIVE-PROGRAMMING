void solve(struct Node* root, int hd, int level, map<int, pair<int, int>> &mp)
{
	if (root == NULL)
		return;
	if (mp.count(hd) == 0)
		mp[hd] = {root->data, level};
	else if (level < mp[hd].second)
	{
		mp[hd] = {root->data, level};
	}
	solve(root->left, hd - 1, level + 1, mp);
	solve(root->right, hd + 1, level + 1, mp);
}
void topView(struct Node *root)
{
	//Your code here
	map<int, pair<int, int>> mp;
	int hd = 0;
	int level = 0;
	solve(root, hd, level, mp);

	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->second.first << " ";
	}
}