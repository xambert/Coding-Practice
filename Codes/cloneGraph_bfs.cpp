Node* cloneGraph(Node* node) {
        /*
        1
        2,3
        1-2
        1-3
        */
        if(node==nullptr) return nullptr;
        unordered_map<Node*, Node*> adj;
        queue<Node*> q;
        q.push(node);
        adj[node] = new Node(node->val);
        while(!q.empty())
            {
                Node* u = q.front();
                q.pop();
                for(Node* v : u->neighbors)
                    {
                        if(adj.find(v)==adj.end())   
                            { 
                                adj[v] = new Node(v->val);
                                q.push(v);
                            }
                        adj[u]->neighbors.push_back(adj[v]);
                    }
            }
        return adj[node];
        }
