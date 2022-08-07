int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int x: stones) q.push(x);
        while(q.size() >1)
        {
            int first = q.top();
            q.pop();
            if(!q.empty()) { first -= q.top(); q.pop(); q.push(first); } 
        }
        return q.top();
    }
