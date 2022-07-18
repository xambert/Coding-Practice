    int maxWater(int arr[], int n) {
            // code here
            // lmx
            int l,r,lmx,rmx,res;
            l = 0;
            r = n-1;
            lmx = arr[0];
            rmx = arr[n-1];
            res = 0;
            while(l<r)
            {
                lmx = max(arr[l], lmx);
                rmx = max(arr[r], rmx);
                if(lmx <= rmx) res = res + lmx-arr[l++];
                else res = res + rmx - arr[r--];
            }
            return res;
    }
