bool dfs(vector<vector<int>> &adj,vector<int> &vis, int &finished,  int curr)
    {
        vis[curr] = 1;
        ++ finished;
        for(int next  : adj[curr])
        {
            if(vis[next]==0) 
            {
               if(dfs(adj, vis, finished, next)) return true;
            }
            else if(vis[next] == 1)
            {
                return true;
            }
        }
        vis[curr] = 2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int i;
        int finished = 0;
        vector<vector<int>> adj(numCourses, vector<int>());
        vector<int> vis(numCourses, 0);
        for(auto pre : prerequisites)
        {
        
            adj[pre[1]].push_back(pre[0]);  // 1,0 = 0->1
        }
        
        for(i = 0; i < numCourses; i += 1)
            if(vis[i]==0 and dfs(adj, vis, finished, i)) return false;
        return (finished == numCourses);
    }
