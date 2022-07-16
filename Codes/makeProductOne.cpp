int makeProductOne(int arr[], int N) {
        // code here
        int ans = 0, neg = 0,zero=0;
        for(int i =0;i<N;i++) 
        {
            if(!arr[i]) { zero++;continue; }
            if(arr[i] < 0) neg++;
            ans += min(abs(-1-arr[i]), abs(1-arr[i]));
        }
        if(!zero and neg&1) ans+=zero+2;
        else ans+=zero;
        return ans;
    }
