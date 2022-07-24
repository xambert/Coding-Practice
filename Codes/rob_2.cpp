    int rob(vector<int>& nums) {
        /*
        
        2 3 1
        
        2 - 3,1
        
        2 3 5 4 1
        
        2 -3,1
        3 -2,4
        1 -4,2
        
        ind pick notpicked
        1   2    0
        2   3+0  2
        3   4+0  3
        4   1+3  4
        
        dp[0][0][0/1]
        
        
        
        */
        
        /*
        int n,i;
        n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[1],nums[0]);
        int dp[n][2][2];
        dp[0][0][0] = 0;
        dp[0][1][1] = nums[0];
        dp[0][1][0] = dp[0][0][1] = -1;
        dp[1][0][0] = 0;
        dp[1][1][0] = nums[1];
        dp[1][0][1] = nums[0];
        dp[1][1][1] = -1;
        for(i=2;i<n;i++)
        {
            dp[i][1][1] = nums[i] + max({dp[n-2][1][1], 0, dp[i-1][0][1]});
            dp[i][1][0] = nums[i] + max({dp[i-1][0][0], dp[i-2][1][0]});
            dp[i][0][0] = max({dp[i-1][0][0], dp[i-1][1][0], dp[i-2][0][0], dp[i-2][1][0]});
            dp[i][0][1] = max({dp[i-2][1][1], dp[i-1][0][1], dp[i-2][0][1], dp[i-1][1][1]});
        }
        return max({dp[n-1][0][0], dp[n-1][0][1], dp[n-1][1][0], dp[n-1][1][1]});
        //WA : [6,3,10,8,2,10,3,5,10,5,3]
        */
        int n;
        n = nums.size();
        if(n==1) return nums[0];
        int dp[n][2],i, res1, res2;
        dp[0][0]=0;
        dp[0][1]=nums[0];
        for(i=1;i<n-1;i++)
        {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
            dp[i][1] = nums[i] + dp[i-1][0];
        }
        res1 = max(dp[n-2][0], dp[n-2][1]); //
        dp[1][0] = 0;
        dp[1][1] = nums[1];
        for(i=2;i<n;i++)
        {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
            dp[i][1] = nums[i] + dp[i-1][0];
        }
        res2 = max(dp[n-1][0], dp[n-1][1]);
        return max(res1, res2);
    }
