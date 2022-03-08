import math
class Solution:
    def nCr(self,n, r):
        res = 1
        k = 1
        while k<=r and n:
            res *= n
            res /= k
            n -= 1
            k += 1
        return math.ceil(res)
            
        
    def uniquePaths(self, m: int, n: int) -> int:
        """
        if  m==1 or n==1:
            return 1
        return self.uniquePaths(m,n-1) + self.uniquePaths(m-1,n)
        TLE
        
        
        dp = [[1 for x in range(n)] for y in range(m)]
        for i in range(1,m):
            for j in range(1,n):
                dp[i][j] = dp[i-1][j] + dp[i][j-1]
        return dp[m-1][n-1]
        """
        n, m = max(n,m), min(n,m)
        m -= 1
        n -= 1
        n += m 
        return self.nCr(n, m)
