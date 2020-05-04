class FirstUnique {
public:
	list<int> unique;
	unordered_map<int, list<int>::iterator> pos;
	FirstUnique(vector<int>& nums)
	{
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			add(nums[i]);
		}
	}

	int showFirstUnique()
	{
		if (unique.empty())
			return -1;
		else
			return unique.front();
	}

	void add(int value)
	{
		if (!pos.count(value))
		{
			unique.push_back(value);
			pos[value] = --unique.end();
		}
		else if (pos[value] != unique.end())
		{
			unique.erase(pos[value]);
			pos[value] = unique.end();
		}

	}
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */