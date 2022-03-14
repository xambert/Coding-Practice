def threeSum(self, nums: List[int]) -> List[List[int]]:
        i,length = 0,len(nums)-1
        nums = sorted(nums)
        ans = set()
        for i in range(0, length-1): # [1: 2,3]
            target = - nums[i]
            l, r = i+1, length
            while l<r:
                s = nums[l] + nums[r]
                if s > target:
                    r -= 1
                elif s < target:
                    l += 1
                else:
                    ans.add(tuple(sorted([nums[i], nums[l], nums[r]])))
                    l += 1
                    r -= 1
                    while(l<r and nums[l] == nums[l-1]): l += 1
                    while(l<r and nums[r] == nums[r+1]): r -= 1
        return ans
    
