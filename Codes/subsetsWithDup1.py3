    def __init__(self):
      self.subset = []
      self.l = 0
    def dfs(self, nums, pick,start=0):
      self.subset.append(pick[:])
      for i in range(start,self.l):
        if(i>start and nums[i]==nums[i-1]):
          continue
        pick.append(nums[i])  #choose element
        self.dfs(nums, pick, i+1)
        pick.pop()    #pop element
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
      #inspired by discussion
      nums = sorted(nums)
      pick = []
      self.l = len(nums)
      self.dfs(nums, pick)
      return self.subset
