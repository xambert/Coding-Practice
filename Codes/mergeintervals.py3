class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        a = sorted(intervals)
        ans = [a[0]]
        for x in a:
            if x[0] <= ans[-1][1]:
                ans[-1] = [min(ans[-1][0], x[0]), max(ans[-1][1], x[1])]
            else:
                ans.append(x)
        return ans
