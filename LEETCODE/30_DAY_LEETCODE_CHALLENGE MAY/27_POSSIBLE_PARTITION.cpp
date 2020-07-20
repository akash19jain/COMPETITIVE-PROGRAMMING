class Solution {
	bool checkPossibleBipartition(int v,
	                              vector<int>& colors,
	                              vector<vector<int>>& graph) {

		for (auto && t : graph[v]) {
			if (colors[t] == colors[v])
				return false;
			else if (colors[t] == 0) {
				colors[t] = colors[v] == 1 ? 2 : 1;
				if (!checkPossibleBipartition(t, colors, graph))
					return false;
			}
		}

		return true;
	}

public:
	bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
		vector<vector<int>> graph(N);
		vector<int> colors(N, 0);

		for (auto && dislike : dislikes) {
			graph[dislike[0] - 1].push_back(dislike[1] - 1);
			graph[dislike[1] - 1].push_back(dislike[0] - 1);
		}

		for (int i = 0; i < N; ++i) {
			if (colors[i] == 0) {
				colors[i] = 1;
				if (!checkPossibleBipartition(i, colors, graph))
					return false;
			}
		}

		return true;
	}
};