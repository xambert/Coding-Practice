	int findMaxSum(int *arr, int n) {
	    // code here
	    int inc, exc, store,i;
	    inc = arr[0];
	    exc = 0;
	    for(i=1;i<n;i++)
	    {
	        store = max(exc, inc);
	        inc = exc + arr[i];
	        exc = store;
	    }
	    return max(inc, exc);
	}
