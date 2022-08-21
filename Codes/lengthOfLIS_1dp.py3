def lengthOfLIS(self, nums: List[int]) -> int:
        """
        0,1,0,3,2,3
        
        0
        0,1
        0,1,2
        0,1,2,3
        
        1,3
        1,2,3
        
        0,3
        0,2,3
        
        3
        
        2,3
        
        Algo:
        
        dp = [0,0,0,0,0,0]
        3    [0,0,0,0,0,1]
        2    [0,0,0,0,2,1]
        3    [0,0,0,1,2,1]
        0    0,3\ 0,[2,3]
        """
        n = len(nums)
        dp = [1]*(n)
        res = 1
        for i in range(n - 1, -1, -1):
            for j in range(i + 1, n):
                if nums[i] < nums[j]:
                    dp[i]   =   max(dp[i], dp[j]+1)
                    res = max(res, dp[i])
        return res
