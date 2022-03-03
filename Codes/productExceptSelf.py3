    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l = len(nums)
        left = [1]*l
        right = [1]*l
        ans = [1]*l
        for i in range(1,l):
            left[i] = nums[i-1] * left[i-1]
            right[l-i-1] = nums[l-i] * right[l-i]
        for i in range(0,l):
            ans[i] = left[i] * right[i]
        return ans
