class StockSpanner {
public:
	vector<pair<int, int>> map;
	StockSpanner()
	{

	}

	int next(int price)
	{
		int span = 1;
		int n = map.size();
		n--;
		while (n >= 0 && price >= map[n].first)
		{
			span += map[n].second;
			n -= map[n].second;
		}
		map.push_back(make_pair(price, span));
		return span;
	}
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */