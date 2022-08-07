vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> close;
        vector<vector<int>> res(k);
        int i = 0;
        for(auto v: points)
        {
            close.push(make_pair(v[0]*v[0]+v[1]*v[1], i++));
            if(i > k) close.pop();      
        }
        while(k--)
        {
            int index = close.top().second;
            close.pop();
            res[k] = points[index];
        }
        return res;
    }
