 def longestPalindrome(self, s: str) -> str:
        left =0
        right = 0
        reslen = 0
        res = (0,0)
        n = len(s)
        for i in range(n):
            
            #odd
            left = right = i
            while left >= 0 and right < n and s[left]==s[right]:
                if reslen < right - left + 1:
                    reslen = right - left + 1
                    res = (left, right)
                left -= 1
                right += 1
                
            #even
            left , right = i , i + 1
            while left >= 0 and right < n and s[left] == s[right]:
                if reslen < right - left + 1:
                    reslen = right - left + 1
                    res = (left, right)
                left -= 1
                right += 1
                
        return s[res[0]: res[1] + 1]
