	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   int l=0, r=0, k=0;
	   sort(a,a+n);
	   sort(b,b+m);
	   while(l<n and r<m)
	   {
	       if(a[l] <= b[r]) res[k++]=a[l++];
	       else res[k++]=b[r++];
	   }
	   while(l<n) res[k++]=a[l++];
	   while(r<m) res[k++]=b[r++];
	}
