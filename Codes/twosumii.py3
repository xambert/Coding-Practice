class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i=0
        j=len(nums)-1
        while i<j:
            if nums[i] + nums[j] == target:
                return [1+i,1+j]
            elif nums[i]+nums[j] > target:
                j -= 1
            else:
                i += 1
        return []
        
