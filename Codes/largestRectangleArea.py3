    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = [-1]
        heights.append(0)
        result = 0
        for i,h in enumerate(heights):
          while heights[stack[-1]] > h:
            result = max(result, heights[stack.pop()] * (i- stack[-1] - 1))
          stack.append(i)
        return result
