pair<long,long> indexes(vector<long long> a, long long x)
    {
        // code here
        pair<int,int> pi;
        
        int l,r,mid,n=a.size(),ans;
        l=0;
        r=n-1;
        ans=-1;
        while(l <= r)
        {
            mid = (l + r)/2;
            if(a[mid]==x) ans = mid;
            if(a[mid] >= x) r = mid-1;
            else l = mid+1;
        }
        pi.first = ans;
        l=0;
        r=n-1;
        ans=-1;
        while(l <= r)
        {
            mid = (l + r)/2;
            if(a[mid]==x) ans = mid;
            if(a[mid] <= x) l = mid+1;
            else r = mid - 1;
        }
        pi.second = ans;
        return pi;
    }
