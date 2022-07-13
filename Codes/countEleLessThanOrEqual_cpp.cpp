int upper_bound(int x, int a[],int n)
    {
        int l,r,mid,ind=0;
        l=0;
        r=n-1;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(a[mid]==x)
            {
                l = mid;
                while(l<=r and a[l]==x) l++;
            }
            else if(a[mid]>x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    sort(arr2,arr2+n);
    //cout<<upper_bound(arr2[3],arr2,n)<<"\n";
    vector<int> ans;
    for(int i=0;i<m;i++) ans.push_back(upper_bound(arr1[i],arr2,n));
    return ans;
    
    }
