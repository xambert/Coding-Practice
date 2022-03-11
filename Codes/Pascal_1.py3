class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        dp = [[1] * x for x in range(1,numRows+1)]
        i = 0
        while i < numRows:
            for j in range(1,len(dp[i])-1):
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1]
            i += 1
        return dp
