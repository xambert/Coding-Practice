long long subCount(long long arr[], int N, long long K)
	{
	    // Your code goes here
	    //base case mp[0] = 1;
	    unordered_map<long long , int> mp;
	    mp[0] = 1;
	    int i;
	    long long mod, res = 0, sum = 0;
	    for(i=0;i<N;i++)
	    {
	        sum = sum + arr[i];
	        mod = (sum%K + K)%K;
	        if(mp[mod]) res += mp[mod];
	        mp[mod]++;
	    }
	    return res;
	}
