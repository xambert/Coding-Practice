vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> close;
        vector<vector<int>> res;
        int i = 0;
        for(auto v: points)
        {
            close.push(make_pair(v[0]*v[0]+v[1]*v[1], i++));
        }
        while(k-- and !close.empty())
        {
            int index = close.top().second;
            close.pop();
            res.push_back(points[index]);
        }
        return res;
    }
