    def singleNonDuplicate(self, nums: List[int]) -> int:
      l = 0
      r = len(nums) - 1
      while l<r:
        mid = (l + r)//2
        next = mid-1 if mid&1 else mid+1
        if nums[mid]==nums[next]:
          l = mid + 1
        else :
          r = mid
      return nums[l]
