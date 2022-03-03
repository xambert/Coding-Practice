    def maxSubArray(self, nums: List[int]) -> int:
        ans = [nums[0]]
        for x in nums[1:]:
            ans.append(max(ans[-1] + x, x))
        return max(ans)
