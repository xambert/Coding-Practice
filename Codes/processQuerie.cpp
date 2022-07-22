vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                                int q) {
        // code here
        int k, i, j, l , r, freezei, freezej;
        vector<bool> ans;
        bool res;
        for(k=0;k<q;k++)
        {
            l = queries[k].first;
            r = queries[k].second;
            res = false;
            //inc
            while(l<r)
            {
                if(a[l] > a[l+1]) break;
                l++;
            }
            while(l<r)
            {
                if(a[l] < a[l+1]) break;
                l++;
            }
            if(l==r) res = true;
            ans.push_back(res);
        }
        return ans;
        
    }
