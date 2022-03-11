class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_till_now = int(1e5+5)
        ans = 0
        for x in prices:
            min_till_now = min(x, min_till_now)
            ans = max(ans, x - min_till_now)
        return ans
