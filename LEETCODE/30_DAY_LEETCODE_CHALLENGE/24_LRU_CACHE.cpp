class LRUCache
{

private:
	int capacity;
	list<int> recent;
	unordered_map<int, int> cache;
	unordered_map<int, list<int>::iterator> pos;
	void use(int key)
	{
		if (pos.find(key) != pos.end())
		{
			recent.erase(pos[key]);
		}
		else if (recent.size() >= capacity)
		{
			int old = recent.back();
			recent.pop_back();
			cache.erase(old);
			pos.erase(old);
		}
		recent.push_front(key);
		pos[key] = recent.begin();
	}
public:
	LRUCache(int capacity): capacity(capacity)
	{

	}

	int get(int key)
	{
		if (cache.find(key) != cache.end())
		{
			use(key);
			return cache[key];
		}
		else
		{
			return -1;
		}
	}

	void put(int key, int value)
	{
		use(key);
		cache[key] = value;
	}
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */