vector<pair<int,int>> cord = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    int row, col;
    void dfs(vector<vector<char>>& board, int r, int c)
    {
        board[r][c]='.';
        int nr, nc;
        for(auto x : cord)
        {
            nr = x.first + r;
            nc = x.second + c;
            if(nc>=0 and nc <= col-1 and nr>=0 and nr<=row-1 and board[nr][nc]=='O')
            dfs(board, nr, nc);
        }
    }
    void solve(vector<vector<char>>& board) {
        /*
        xxxxx   xxxxx
        oxooo   oxooo
        ooooo = ooooo
        xxoxx   xxoxx
        oxoxo   oxoxo
        */
        
        //row 1, row n, rem
        // row 1
        
        int i, j;
        row = board.size();
        col = board[0].size();
        for(i=0;i<col;i++) 
        {
            if(board[0][i]=='O') dfs(board,0, i);
            if(board[row-1][i]=='O') dfs(board, row-1, i);
        }
        for(i=1;i<row-1;i++)
        {
            if(board[i][0]=='O') dfs(board, i, 0);
            if(board[i][col-1]=='O') dfs(board, i, col-1);
        }
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
            {
                if(board[i][j]=='.') board[i][j] = 'O';
                else board[i][j]='X';
            }     
    }
