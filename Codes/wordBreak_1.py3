def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        
        word = dict()
        n = len(s)
        dp = [False]*(n + 1)
        '''
        leetcode
        [le, lee, tco, dde, de]
        0
        le
        dp = [0,0,0,0,0,0,0,0,0]
        le [0,2)
        dp = [0,1,0,0,0,0,0,0,0,0]
        lee [0,3)
        dp = [0,1,1,0,0,0,0,0,0,0]
        tco [3,6)
        dp = [0,1,1,0,0,1,0,1,0]
        
        abc
        abc
        abc_
        ffft
        0=t
        mark n+1 as true and appply above
        '''
        
        dp[n]   =   True
        for i in range(n - 1, -1, -1):
            for word in wordDict:
                l = len(word)
                lim = i - l + 1
                if lim>=0 and dp[i+1]  and s[lim : i+1]==word:
                    dp[lim] =   True
        return dp[0]
