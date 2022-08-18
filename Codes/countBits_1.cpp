vector<int> countBits(int n) {
        /*
        0
        1
        10
        11
        100
        101
        */
        int i, sz,f;
        queue<int> q;
        vector<int> v;
        v.push_back(0);
        q.push(1);
        ++n;
        while(v.size()<n)
        {
            sz = q.size();
            for(i=0;i<sz and v.size()<n;i++)
            {
                f = q.front();
                v.push_back(f);
                q.pop();
                q.push(f);
                q.push(f+1);
            }
        }
        return v;
    }
