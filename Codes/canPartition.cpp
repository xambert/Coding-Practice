def canPartition(self, nums: List[int]) -> bool:
        n = len(nums)
        s = sum(nums)
        if s&1:
            return False
        s = s//2
        dp = [False] * (s+1)
        
        dp[0] = True
        
        for val in nums:
            for i in range(s, 0, -1):
                if i >= val:
                    dp[i] = dp[i] or dp[i -  val]
        return dp[s]
        
