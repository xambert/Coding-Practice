void swap(int &x, int &y)
    {
        int t = x;
        x = y;
        y = t;
    }
    void rotate(vector<vector<int> >& matrix) {
        // Code here
        /*
        1 2 3
        4 5 6
        7 8 9
        9 8 7
        6 5 4
        3 2 1
        */
        int row = matrix.size(), col = matrix[0].size();
        int mid = row/2;
        int i, j;
        for(i = 0;i<mid; i++)
        for(j = 0; j<col;j++)
        {
            swap(matrix[i][j], matrix[row-i-1][col-j-1]);
        }
        if(row&1)
        {
        for(j = 0; j<col/2;j++)
        {
            swap(matrix[mid][j], matrix[mid][col-j-1]);
        }
        }
        
        
    }
