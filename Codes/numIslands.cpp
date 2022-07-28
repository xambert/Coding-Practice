int numIslands(vector<vector<char>>& grid) {
        
        int cnt = 0, i, j,l,k,m,n;
        stack<pair<int,int>> stk;
        m = grid.size();
        n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n,false));
        for(l=0;l<m;l++)
        {
            for(k=0;k<n;k++)
            {
                //cout<<vis[l][k]<<"-";
                if(!vis[l][k] and grid[l][k]=='1')
                {
                    stk.push({l,k});
                    cnt ++;
                    
                    while(!stk.empty())
                    {
                    i = stk.top().first;
                    j = stk.top().second;
                    //cout<<i<<" "<<j<<"\n";
                    stk.pop();
                    vis[i][j] = true;
                    if(i+1<m and vis[i+1][j]==0 and grid[i+1][j]=='1') stk.push({i+1,j});
                    if(i>0 and vis[i-1][j]==0 and grid[i-1][j]=='1') stk.push({i-1,j});
                    if(j>0 and vis[i][j-1]==0 and grid[i][j-1]=='1') stk.push({i,j-1});
                    if(j+1<n and vis[i][j+1]==0 and grid[i][j+1]=='1') stk.push({i,j+1});
                    
                    }
                }
                
            }
        }
        return cnt;
    }
