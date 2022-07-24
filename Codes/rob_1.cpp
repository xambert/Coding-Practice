int rob(vector<int>& nums) {
        
        /*2 3 4
        dp[][0] = pick
        dp[][0] = pick
        No. INC EXC
        1   2   0
        2   curr + prev_exc prev_inc
        
        100 3 7
        
        
        */
        int i,n;
        n = nums.size();
        int dp[n][2];
        dp[0][0] = 0;
        dp[0][1] = nums[0];
        for(i=1;i<n;i++)
        {
            dp[i][1] = nums[i]+dp[i-1][0];
            dp[i][0] = max(dp[i-1][0] , dp[i-1][1]);
        }
        return max(dp[n-1][0], dp[n-1][1]);
    }
