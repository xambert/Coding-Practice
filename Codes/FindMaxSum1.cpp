int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int inc, exc, tmp;
        //name vars
        int i;
        if(n==1) return arr[0];
        if(n==2) return max(arr[0], arr[1]);
        inc = arr[0];
        exc = 0;
        for(i=1;i<n;i++)
        {
            tmp = max(inc, exc);
            inc = exc + arr[i];
            exc = tmp;
        }
        return max(inc, exc);
    }
