int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int i;
    	int curr_platforms, min_platforms;
    	pair<int,int> curr;
    	vector<pair<int,int>> time;
    	priority_queue<int,vector<int> , greater<int> > prev;
    	for(i=0;i<n;i+=1)
    	{
    	    time.push_back(make_pair(arr[i], dep[i]));
    	}
        sort(time.begin(), time.end());
    	curr = time[0];
    	curr_platforms = 1;
    	min_platforms = 1;
    	prev.push(curr.second);
    	for(i=1;i<n;i+=1)
    	{
    	    curr = time[i];
    	    if(curr.first <= prev.top())
    	    {
    	        curr_platforms += 1;
    	    }
    	    else
    	    {
    	        prev.pop();
    	    }
    	    prev.push(curr.second);
    	    min_platforms = max(min_platforms, curr_platforms);
    	}
    	return min_platforms;
    	
    }
