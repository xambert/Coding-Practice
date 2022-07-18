vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    int i,j,l1,l2,l,c=0,sum,k;
	    l1 = a.size();
	    l2 = b.size();
	    l = max(l1, l2)+1;
	    k = l-1;
	    vector<int> res(l, 0);
	    i=l1-1;
	    j=l2-1;
	    while(i>=0 and j>=0 and k>=0)
	    {
	        sum = a[i]+b[j]+c;
	        c = sum/10;
	        res[k] = sum%10;
	        i--;
	        j--;
	        k--;
	    }
	    while(i>=0 and k>=0)
	    {
	        sum = a[i] + c;
	        c = sum/10;
	        res[k] = sum%10;
	        i--;
	        k--;
	    }
	    while(j>=0 and k>=0)
	    {
	        sum = b[j] + c;
	        c = sum/10;
	        res[k] = sum%10;
	        j--;
	        k--;
	    }
	    if(c) res[0]=c;
	    else res.erase(res.begin());
	    return res;
	    
	}
