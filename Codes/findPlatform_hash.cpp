int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int time[2361]={0};
    	int i;
    	int min_platforms=1;
    	for(i=0 ; i<n ; i+=1)
    	{
    	    time[arr[i]]+=1;
    	    time[dep[i]+1]-=1;
    	}
    	for(i=1; i<2361; i+=1)
    	{
    	    time[i] += time[i-1];
    	    min_platforms = max(time[i], min_platforms);
    	}
    	return min_platforms;
    	
    }
