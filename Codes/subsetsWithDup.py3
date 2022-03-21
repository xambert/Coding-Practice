
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        subsets = set()
        n= 2**len(nums)
        for i in range(n):
          binary = bin(i)[2:][::-1]
          s = []
          for ind,val in enumerate(binary):
            s = s + [nums[ind]] if val == "1" else s
          subsets.add(tuple(sorted(s)))
        return map(list, subsets)
