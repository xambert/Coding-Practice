int countBuildings(int h[], int n) {
	    // code here
	    int mx = -1;
	    int cnt=0;
	    for(int i = 0;i<n;i++)
	    {
	        if(h[i] > mx) {mx=h[i]; cnt++; }
	    }
	    return cnt;
	}
