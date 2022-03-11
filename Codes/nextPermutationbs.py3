class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        i = n-2
        j = n-1
        while i >=0 and nums[i] >= nums[i+1]:
            i -= 1
        if(i<0): 
            nums = nums.reverse()
        else:
            j = i+1
            h = n - 1
            while j<=h :
                mid = (j + h)//2
                if nums[mid] > nums[i]:
                    j = mid + 1
                else:
                    h = mid - 1
            j -= 1
            nums[i], nums[j] = nums[j], nums[i]
            nums[:] = nums[:i+1] + nums[i+1:][::-1] # difference = [:]
