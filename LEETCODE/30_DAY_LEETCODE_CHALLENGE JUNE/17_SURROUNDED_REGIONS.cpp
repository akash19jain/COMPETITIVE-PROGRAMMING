class Solution {
	void UpdateRegion(vector<vector<char>>& board, int i, int j, int m, int n)
	{
		if (i < 0 || j < 0 || i == m || j == n || board[i][j] != 'O')
			return;
		board[i][j] = '1';
		UpdateRegion(board, i, j + 1, m, n);
		UpdateRegion(board, i, j - 1, m, n);
		UpdateRegion(board, i + 1, j, m, n);
		UpdateRegion(board, i - 1, j, m, n);

	}
public:
	void solve(vector<vector<char>>& board) {

		if (board.size() == 0 || board.size() == 1 || board[0].size() == 1)
			return;
		int m = board.size(), n = board[0].size();

		for (int j = 0; j < n; ++j)
		{
			if (board[0][j] == 'O') //first row
				UpdateRegion(board, 0, j, m, n);

			if (board[m - 1][j] == 'O') //and last row
				UpdateRegion(board, m - 1, j, m, n);
		}

		for (int i = 0; i < m; ++i)
		{
			if (board[i][0] == 'O')
				UpdateRegion(board, i, 0, m, n);

			if (board[i][n - 1] == 'O')
				UpdateRegion(board, i, n - 1, m, n);

		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] == 'O')
					board[i][j] = 'X';
				else if (board[i][j] == '1')
					board[i][j] = 'O';
			}
		}
	}
};