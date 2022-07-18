int longest(int arr[],int n)
    {
        // Write your code here
        int ans = 1,i=1,mx=arr[0];
        for(;i<n;i++) if(arr[i]>=mx) {mx = arr[i]; ans++;}
        return ans;
    }
