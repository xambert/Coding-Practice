int findMaxAverage(int arr[], int n, int k) {
        // code here
        int ms, i, s=0, ind=0;
        if(k>n) return 0;
        for(i=0;i<k;i++) s+=arr[i];
        ms = s;
        for(i=1;(i+k-1)< n;i++)
        {
            //cout<<arr[i]<<" "<<i<<"\n";
            s = s - arr[i-1]+arr[i+k-1];
            if(s > ms)
            {
                ms = s;
                ind = i;
            }
        }
        return ind;
    }
