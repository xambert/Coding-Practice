vector<int> printKClosest(vector<int> a, int n, int k, int x) {
        // code here
        int lb, ub, l, r, mid,pick1,pick2;
        //finding lower bound
        l = 0;
        r = n-1;
        lb = 0;
        ub  = n-1;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(x >= a[mid]) 
            {
                lb = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        
        //finding upper_bound
        l = 0;
        r = n-1;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(x <= a[mid])
            {
                ub = mid;
                r = mid - 1;
            }
            else    l = mid +1;
        }
        //cout<<lb<<" "<<ub<<"\n";
        //idea l<-5 5->r
        // keep no. of x - 1 in answer ; misunderstood question
        l = lb;
        r = ub;
        vector<int>v;
        if(a[l]==x) 
        {
            lb = min(lb, ub); //if element is present then bounds are swapped;
            ub = max(lb, ub);
            int diff = r - l;
            while(diff and k)
            {
                v.push_back(x);
                diff -= 1;
                k -= 1;
            }
            l -= 1;
            r += 1;
        }
        else if(l == r) { l=n-1; r=0; }
        
        //cout<<l<<" "<<r<<"\n";
        while(k and l>=0 and r<n)
        {
            pick1 = abs(a[r] - x);
            pick2 = abs(a[l] - x);
            if(pick1 <= pick2)
            {
                v.push_back(a[r]);
                r += 1;
            }
            else
            {
                v.push_back(a[l]);
                l -= 1;
            }
            k -= 1;
        }
        while(k and l>=0) 
        {
                v.push_back(a[l]);
                l -= 1;
                k -= 1;
        }
        while(k and r<n) 
        {
                v.push_back(a[r]);
                r += 1;
                k -= 1;
        }
        return v;
    }
