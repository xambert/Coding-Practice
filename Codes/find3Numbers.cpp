vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        int beg, mi = arr[0], mid = INT_MAX;
        vector<int> v;
        for(int i=1;i<N;i++)
        {
            if(mi >=arr[i]) mi = arr[i];
            else if(mid >= arr[i]) { mid = arr[i], beg = mi;}
            else if(arr[i] > mid){ v= {beg, mid, arr[i]}; return v;}
        }
        v={};
        return v;    
    }
