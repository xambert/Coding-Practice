    def removeDuplicates(self, nums: List[int]) -> int:
      i = k = 1
      j = len(nums)-1
      while i<=j:
        if(nums[i] != nums[i-1]):
          nums[k] = nums[i]
          k+=1
        i+=1
      return k
