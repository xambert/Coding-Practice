
    def lengthOfLongestSubstring(self, s: str) -> int:
      if s is None:
        return 0
      hashmap = [-1]*256 #frequency
      last = -1
      ans = 0
      for i,v in enumerate(s):
        val = ord(v)
        if hashmap[val] is not -1:
          last = max(last, hashmap[val])  #Test Case: janvianj 
        hashmap[val] = i
        ans = max(ans, i-last)  
      return ans
