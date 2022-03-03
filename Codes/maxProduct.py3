    def maxProduct(self, nums: List[int]) -> int:
        left = [nums[0]]
        right = [nums[-1]]
        """
        for x,y in zip(nums[1:],nums[1::-1]):
            left.append(left[-1]*x)
            right.append(right[-1]*y)
        print(left,right,zip(nums[1:],nums[1::-1]))
        return max(max(zip(left,right)))
        """

        for x in nums[1:]:
            p = left[-1] if left[-1] else 1
            left.append(p*x)
        for x in nums[::-1][1:]:
            p = right[-1] if right[-1] else 1
            right.append(p*x)

        return max(max(left),max(right))
