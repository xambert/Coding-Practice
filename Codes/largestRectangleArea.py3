def largestRectangleArea(self, heights: List[int]) -> int:
        stack = [-1]
        heights += [0]
        ans = 0
        for i,n in enumerate(heights):
            while heights[stack[-1]] > n:
                h = heights[stack.pop()]
                w = i - stack[-1] - 1
                ans = max(ans, h*w)
            stack += [i]
        heights.pop()
        return ans
