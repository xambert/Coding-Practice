class Solution:
    def maxProfit(self, nums: List[int]) -> int:
        ans = 0
        for i in range(1,len(nums)):
            ans += max(0, nums[i]- nums[i-1])
        return ans
                
        
