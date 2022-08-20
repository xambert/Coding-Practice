def numDecodings(self, s: str) -> int:
        
        '''
        11224
        1   1224
        1   1   224
        1   12 24 / 12 2 4 / 1 2 2 4 / 22 4
        11  224
        
        
        1224
        24
        2 4
        224
        2 + prev
        2 2 4
        2 24
        22 + rem
        22 4
        
        224
        curr1   + rem
        1.  2   2   4
        2.  2   24
        curr2   + rem
        3.  22  4
        
        373
        
        1.  3
        2.  7 3
        3.  3 7 3   =   1
        
        264
        
        1.  4
        2.  6 4
        3.  2 6 4
        4.  26 4
        
        268
        
        1.  2   6   8
        2.  26  8
        
        1.      [0,0,0,0]
        2. 8    [0,0,1,0]    
        3. 6 8  [0,1,1,0]
        4. 2 6 8[1,1,1,0]
        5. 26 8 [2,1,1,0]
        
        
        1 224
        1 +(3)
        + 
        12 24
        1 +(2)
        1.  1   2   2   4
        2.  1   2   24
        3.  1   22  4
        4.  12  2   4
        5.  12  24
        
        
        
        =7
        Algorithm
        dp[i]   =   valid2  + valid1
        valid1  =   0 skip
                    dp[i+1] otherwise
        
        valid2  =   10> val >26 skip
                    dp[i+2] otherwise
        precompute dp[n-1], dp[n-2]
        
        '''
        if s[0]=="0":
            return 0
        
        n = len(s)
        
        dp = [0]*(n+1)
        
        def valid1(ch):
            return  ch!="0"

        if valid1(s[-1]):
            dp[n-1] =  1
            
        if n==1:
            return dp[0]
        
        def valid2(ch):
            return 10<=int(ch)<=26
            
        if valid1(s[-2]):
            dp[n-2] +=  dp[n-1]    
            
        if valid2(s[-2:]):
            dp[n-2] +=  1
        
        if n==2:
            return dp[0]
        
        for i in range(n - 3,   -1, -1):
            if  valid1(s[i]):
                dp[i]   +=  dp[i+1]
            if  valid2(s[i : i+2]):
                dp[i]   +=  dp[i+2]
        return dp[0]
