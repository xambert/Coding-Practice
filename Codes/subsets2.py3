    def subsets(self, nums: List[int]) -> List[List[int]]:
      return [[num for i,num in enumerate(nums) if bit & (1<<i)] for bit in range(2**len(nums))]
