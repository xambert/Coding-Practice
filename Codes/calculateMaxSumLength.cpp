	int calculateMaxSumLength(int arr[], int n, int k)
	{
	    int i, seqmax=INT_MIN, len=0,ans=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] <= k) { seqmax = max(seqmax, arr[i]); len++; }
	        else 
	        { 
	            if(seqmax==k) ans+= len; 
	            seqmax = INT_MIN;
	            len = 0;
	        }
	    }
	    if(seqmax==k) ans+=len;
	    return ans;
	}
