
bool dfs(vector<vector<char>>& board, string word, int i, int j, int k)
    {
        if(k==word.length()) return true;
        else if(i<0 or j<0 or i==board.size() or j==board[0].size()) return false;
        if(board[i][j]!= word[k]) return false;
        char ch = board[i][j];
        board[i][j]='_';
        bool res =  dfs(board, word,i-1,j,k+1) or
            dfs(board, word,i, j-1, k+1) or
            dfs(board, word,i+1, j, k+1) or
            dfs(board, word,i, j+1, k+1);
        board[i][j] = ch;
        return res;
        }
    bool exist(vector<vector<char>>& board, string word) {
        for(int m=0;m<board.size();m++)
            for(int n=0;n<board[0].size();n++)
                if(dfs(board, word,m,n,0)) return true;
        return false;
    }
