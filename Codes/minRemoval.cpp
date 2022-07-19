int minRemoval(int arr[], int n) {
	    // code here
	    int i, target, l , r, lb, mid, ans=INT_MAX;
	    sort(arr, arr+n);
	    for(i=0;i<n-1;i++)
	    {
	        target = arr[i]<<1;
	        lb = i;
	        l = i + 1;
	        r = n - 1;
	        while(l<=r)
	        {
	            mid = (l + r)/2;
	            if(target >= arr[mid]) { lb = mid; l = mid + 1;}
	            else r = mid-1;
	        }
	        //cout<<i+1<<" "<<arr[i]<<" "<<lb+1<<" "<<arr[lb]<<" "<<i + n-lb-1<<" "<<ans<<"\n";
	        ans = min(ans, i + n-lb-1);
	        //cout<<ans<<"--\n";
	    }
	    //cout<<ans<<"\n";
	    //cout<<(0 ? ans==INT_MAX: ans)<<"\n";
	    //return (ans ? ans!=INT_MAX: 0);
	    if(ans == INT_MAX) return 0;
	    return ans;
	}
