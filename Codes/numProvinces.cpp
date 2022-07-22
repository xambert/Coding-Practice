void dfs(vector<vector<int>> adj, vector<bool> &vis, int u, int V)
    {
        vis[u] = true;
        for(int v=0;v<V;v++)
        {
            if(adj[u][v] and !vis[v]) dfs(adj, vis, v, V);
        }
            
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int cnt = 0, i, j;
        vector<bool> vis(V+1, false);
        for(i=0;i<V;i++){
            for(j=0;j<V;j++)
            {
                if(adj[i][j] and !vis[i]) { dfs(adj, vis, i, V);cnt++;}
            }
        }
        return cnt;
    }
