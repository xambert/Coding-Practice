int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int i,j,l,r,sa,sb;
        sa=0;
        sb=0;
        sort(A,A+n);
        sort(B,B+m);
        for(i=0;i<n;i++) sa+=A[i];
        for(i=0;i<m;i++) sb+=B[i];
        i=0;
        j=0;
        while(i<n and j<m)
        {
            l = sa-A[i]+B[j];
            r = sb-B[j]+A[i];
            if(l==r){ return 1;}
            else if(l < r) j++;
            else i++;
        }
        return -1;
	}
