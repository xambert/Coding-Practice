vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0);
        vector<int> res;
        vector<vector<int>> adj(numCourses, vector<int>());
        for(auto v: prerequisites) 
        {
            adj[v[1]].push_back(v[0]);
            indegree[v[0]]++;
        }
        queue<int> q;
        for(int i = 0; i< numCourses; i++) 
        {
            if(indegree[i] == 0) q.push(i);
        }
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for(int next : adj[curr])
            {
            indegree[next] -= 1;
            if(indegree[next] == 0) q.push(next);
            }
        }
        if(res.size()==numCourses)
        return res;
        else
        return {};
    }
