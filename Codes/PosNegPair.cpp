vector<int> PosNegPair(int arr[], int n) {
        map<int, int> mp;
        vector<int> v;
        sort(arr, arr+n, greater<int>());
        int i;
        for(i=0;i<n;i++)
        {
            if(mp[-arr[i]]-- >0) { v.push_back(-abs(arr[i])); v.push_back(abs(arr[i])); }
            mp[arr[i]]++;
        }
        return v;
    }
