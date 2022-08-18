Node* dfs(unordered_map<Node*, Node*> &adj, Node* node)
    {
        if(adj.find(node)!=adj.end())
             return adj[node];
        Node* copy = new Node(node->val);
        adj[node] = copy;
        for(Node* neig : node->neighbors)
            adj[node]->neighbors.push_back(dfs(adj, neig));
        return adj[node];
    }
    Node* cloneGraph(Node* node) {
        /*
        1
        2,3
        1-2
        1-3
        */
        if(node==nullptr) return nullptr;
        unordered_map<Node*, Node*> adj;
        /*
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
            {
                Node* u = q.front();
                adj[u] = new Node(u->val);
                q.pop();
                for(Node* v : u->neighbors)
                    {
                        if(adj.find(v)==adj.end())   
                            { 
                                adj[u]->neighbors.push_back(v);
                                q.push(v);
                            }
                    }
            }
        */
        return dfs(adj, node);
        }
