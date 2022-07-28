int orangesRotting(vector<vector<int>>& grid) {
        int i,j,l,cnt1,ans,ni,nj,row, col,k;
        pair<int,int> pi;
        row = grid.size();
        col = grid[0].size();
        cnt1=0;
        ans=0;
        queue<pair<int,int>> rot;
        int x[4] = {0,0,1,-1};
        int y[4] = {1,-1,0,0};
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j]==2) rot.push({i,j});
                if(grid[i][j]==1) cnt1++;
            }
        }
        ans = 0;
        while(!rot.empty() and cnt1>0)
        {
            int rotsz = rot.size();
            for(k=0;k<rotsz;k++)
            {
            pi = rot.front();
            i = pi.first;
            j = pi.second;
            for(l=0;l<4;l++)
            {
                ni = i + x[l];
                nj = j + y[l];
                if(ni>=0 and ni<row and nj>=0 and nj<col and grid[ni][nj]==1)
                {
                    grid[ni][nj] = 2;
                    cnt1--;
                    rot.push({ni, nj});
                }
            }
            rot.pop();
            }
            ans++;
        }
        if(cnt1) return -1;
        return ans;
        
    }
