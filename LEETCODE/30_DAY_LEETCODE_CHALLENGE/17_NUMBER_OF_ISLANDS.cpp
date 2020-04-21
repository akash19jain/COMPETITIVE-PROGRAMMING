class Solution 
{
public:
    int numIslands(vector<vector<char>>& grid) 
    {
    	 int n=grid.size();
    	 int ans=0;
         if(n==0)
             return ans;
    	 int m=grid[0].size();
    	 for(int i=0;i<n;i++)
    	 {
    	 	for(int j=0;j<m;j++)
    	 	{
    	 		if(grid[i][j]=='1')
    	 		{
                    ans++;
    	 			DFS(grid,i,j,n,m);
    	 		}
    	 	}
    	 }  
    	 return ans; 
    }
private:
	void DFS(vector<vector<char>>& grid,int i,int j,int n,int m)
	{
		if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0')
			return;
        
         grid[i][j]='0';
		 DFS(grid,i+1,j,n,m);
		 DFS(grid,i-1,j,n,m);
		 DFS(grid,i,j+1,n,m);
		 DFS(grid,i,j-1,n,m);
	}
};