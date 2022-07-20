int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr, arr+n);
	    int i, l, r,cnt, s, ans = 0;
	    for(i=n-1;i>1;i--)
	    {
	        l = 0;
	        r = i -1;
	        cnt = 0;
	        while(l < r)
	        {
	            s = arr[l] + arr[r];
	            if(s == arr[i]) { cnt ++; l++; r--; }
	            else if(s < arr[i]) { l++; }
	            else r--;
	        }
	        ans += cnt;
	    }
	    return ans;
	}
