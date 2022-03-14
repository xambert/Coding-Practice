def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        i,length = 0,len(nums)-1
        nums = sorted(nums)
        ans = set()
        for i in range(0, length-2): # [1: [2: [3,4]]]
            upper = target - nums[i]
            for j in range(i+1,length-1):
                    lower = upper - nums[j]
                    l, r = j+1, length
                    while l<r:
                        s = nums[l] + nums[r]
                        if s > lower:
                            r -= 1
                        elif s < lower:
                            l += 1
                        else:
                            ans.add(tuple(sorted([nums[i],nums[j],nums[l], nums[r]])))
                            l += 1
                            r -= 1
                            while(l<r and nums[l] == nums[l-1]): l += 1
                            while(l<r and nums[r] == nums[r+1]): r -= 1
        return ans
    
