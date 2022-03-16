    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans = 0
        count = 0
        for n in nums:
          if n: count+=1
          else: count = 0
          ans = max(ans, count)
        return ans
