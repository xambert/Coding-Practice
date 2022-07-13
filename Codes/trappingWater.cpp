long long trappingWater(int arr[], int n){
        // code here
        int l,r,lmx,rmx; long long ans;
        l=0;
        r=n-1;
        lmx=arr[l];
        rmx=arr[r];
        ans=0;
        while(l<r)
        {
            if(lmx<=rmx)
            {
                l+=1;
                lmx = max(lmx, arr[l]);
                ans+= lmx-arr[l];
            }
            else
            {
                r-=1;
                rmx = max(rmx, arr[r]);
                ans+= rmx-arr[r];
            }
        }
        return ans;
    }
