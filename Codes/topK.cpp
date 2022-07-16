static bool cmp(pair<int,int> &a, pair<int,int> &b)
    {
        if(a.second > b.second) return true;
        else if(a.second ==b.second and a.first >= b.first) return true;
        return false;
    }
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int, int> mp;
        for(auto x: nums) mp[x]+=1;
        vector<pair<int,int>> vpi;
        vector<int> v;
        int n = mp.size(),i=0;
        if(k>n) return v;
        for(auto x : mp)
            vpi.push_back(x);
        sort(vpi.begin(), vpi.end(), cmp);
        while(i<k) v.push_back(vpi[i++].first);
        return v;
    }
