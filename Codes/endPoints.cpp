pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        /*
        r : d
        l : u
        u : r
        d : l
        */
        map<string, string> dir;
        dir["right"] = "down";
        dir["left"] = "up";
        dir["up"] = "right";
        dir["down"] = "left";
        string currdir = "right";
        int m = matrix.size();
        int n = matrix[0].size();
        int  i =0, j= 0;
        while(i < m  and j < n)
        {
            if(matrix[i][j])
            {
                currdir = dir[currdir];
                matrix[i][j] = 0;
            }
            if(currdir == "down")
            {
                i += 1;
                if(i == m) return {i-1, j};
            }
            else if(currdir == "up")
            {
                i -= 1;
                if(i == -1) return {0, j};
            }
            else if(currdir == "right")
            {
                j += 1;
                if(j == n) return {i, j-1}; 
            }
            else if(currdir == "left")
            {
                j -= 1;
                if(j == -1) return {i, 0};
            }
        }
    }
