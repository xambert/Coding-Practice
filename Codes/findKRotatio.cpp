int findKRotation(int a[], int n) {
	    int l,r,mid;
	    l=0;
	    r=n-1;
	    while(l<r)
	    {
	        mid = (l+r)/2;
	        if(a[mid]<a[r]) r=mid;
	        else l = mid+1;
	    }
	    return l;
	    // code here
	}
  
