    def __init__(self):
      self.subset = []
      
    def dfs(self, nums, start):
      if start == len(nums):
        self.subset.append(nums[:])
      for i in range(start, len(nums)):
        nums[i], nums[start] = nums[start], nums[i]
        self.dfs(nums, start+1) #start + 1 and not i+1
        nums[i], nums[start] = nums[start], nums[i]
          
    def permute(self, nums: List[int]) -> List[List[int]]:
      self.dfs(nums, 0)
      return self.subset
