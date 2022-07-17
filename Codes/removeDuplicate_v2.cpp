vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        /* Order not maintained
        set<int> s;
        for(auto x: arr) s.insert(x);
        vector<int> v(s.begin(), s.end());
        */
        int freq[101]={0};
        vector<int> v;
        for(auto x: arr) if(!(freq[x]++)) v.push_back(x);
        return v;
        
        return v;
    }
