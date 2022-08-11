def maxSubArray(self, nums: List[int]) -> int:
        dp = [0]
        res = -float("inf")
        for val in nums:
            curr = val + max(dp[-1], 0)
            res = max(res, curr)
            dp.append(curr)
        return res
