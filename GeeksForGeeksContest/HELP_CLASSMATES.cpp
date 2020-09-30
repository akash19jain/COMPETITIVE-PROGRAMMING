

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


//User function Template for C++

vector<int> help_classmate(vector<int> array, int n)
{
	unordered_map<int, int> mp;
	stack<int> st;
	stack<int> index;

	st.push(array[0]);
	index.push(0);

	for (int i = 1; i < n; i++)
	{
		if (st.empty())
		{
			st.push(array[i]);
			index.push(i);
		}
		else
		{
			while (st.empty() == false && st.top() > array[i])
			{
				mp[index.top()] = array[i];
				st.pop();
				index.pop();
			}
			st.push(array[i]);
			index.push(i);


		}
	}
	while (st.empty() == false)
	{
		mp[index.top()] = -1;
		st.pop();
		index.pop();
	}
	vector<int> ans;

	for (int i = 0; i < n; i++)
	{
		ans.push_back(mp[i]);
	}
	return ans;
}

// { Driver Code Starts.

int main()
{
	int t = 1;
	//cin>>t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}
		vector<int> result = help_classmate(array, n);
		for (int i = 0; i < n; ++i)
		{
			cout << result[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends