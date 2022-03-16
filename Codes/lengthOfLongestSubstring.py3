    def lengthOfLongestSubstring(self, s: str) -> int:
      hashmap = {} #frequency
      last = -1
      ans = 0
      for i,val in enumerate(s):
        if val in hashmap:
          last = max(last, hashmap[val])  #Test Case: janvianj 
        hashmap[val] = i
        ans = max(ans, i-last)  
      return ans
