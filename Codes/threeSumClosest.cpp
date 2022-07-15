int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        //step-1 sort
        sort(arr.begin(), arr.end());
        int diff = INT_MAX, ans,n = arr.size(),i,j,k,sum;
        for(k=0;k<=n-3;k++)
        {
            i = k+1;
            j = n - 1;
            while(i<j)
            {
                sum =   arr[i] + arr[j] + arr[k];
                
                if(sum <= target) i++;
                else j--;
                
                if(abs(sum-target) < diff)
                {
                    diff = abs(sum-target);
                    ans = sum;
                }
                else if(abs(sum-target) == diff)
                {
                    ans = max(ans, sum);
                }
            }
        }
        return ans;
    }
