class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<string> str(strs.begin(), strs.end());
        vector<vector<string> > ans;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            sort(str[i].begin(),str[i].end());
        }
            
        unordered_map<string, vector<int>> mp;
        for(int i=0;i<n;i++)
            mp[str[i]].push_back(i);
        int i=0;
        for (auto itr : mp)
        {
            ans.push_back(vector<string>());
            for (int index : itr.second)
            {
                string x=strs[index];
                ans[i].push_back(x);
                cout<<x<<" ";
            }
            cout<<"\n";
            i++;
        }
        
        return ans;
        
    }
};