    def __init__(self):
      self.l = 0
      self.subset = []
          
    def dfs(self,nums, pick,csum, start = 0):
      #print("xcx", pick)
      if csum < 0:
        return
      if csum == 0:
        self.subset.append(pick[:])
        return
      for i in range(start, self.l):
        pick.append(nums[i])
        self.dfs(nums, pick, csum-nums[i],i)
        pick.pop()
      pass
      
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
      nums = sorted(candidates)
      self.l = len(nums)
      pick = []
      self.dfs(nums, pick,target)
      return self.subset
