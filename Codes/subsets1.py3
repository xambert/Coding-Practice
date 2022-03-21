    def __init__(self):
      self.subset = []
      self.l = 0
    def dfs(self, nums,temp, start):
      self.subset.append(temp[:]) #temp gives unwanted answer, temp[:] right
      for i in range(start, self.l):
        temp.append(nums[i])
        self.dfs(nums, temp, i+1)
        temp.pop(-1)
        
    def subsets(self, nums: List[int]) -> List[List[int]]:
      #arr = sorted(nums)
      self.l = len(nums)
      temp = []
      self.dfs(nums, temp ,0)
      return self.subset
