class Solution {
public:
    int x[4] = {0,0,1,-1};
    int y[4] = {1,-1,0,0};
    void dfs(int i, int j, vector<vector<int>> &heights, vector<vector<bool>>  &vis,int m, int n, int maxh)
    {
        if(i < 0 or j < 0 or i >=m or j >= n or heights[i][j] < maxh or vis[i][j])
            return;
        vis[i][j] = true;
        for(int k = 0; k < 4; k++)
            dfs(i+x[k], j+y[k], heights, vis, m, n, heights[i][j]);  
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
  
        //find for pacific 1st row and 1st column
        //find for atlantci last row and last column
        int m , n , i , j;
        m = heights.size();
        n = heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>>atlantic(m, vector<bool>(n, false));
        //1st and last row
        for(i = 0; i < n; i++)
        {
            dfs(0, i, heights, pacific, m, n, heights[0][i]);
            dfs(m - 1, i, heights, atlantic, m, n, heights[m - 1][i]);
        }
        //1st and last col
        for(i = 0; i < m; i++)
        {
            dfs(i, 0, heights, pacific, m, n, heights[i][0]);
            dfs(i, n - 1, heights, atlantic, m, n, heights[i][n - 1]);
        }
        vector<vector<int>> result;
        for(i = 0; i < m; i++ )
            for(j = 0; j < n ; j++)
                if(atlantic[i][j] and pacific[i][j])
                    result.push_back({i ,j});
        return result;
        
    }
};
