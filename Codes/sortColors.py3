class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        #Incorrect syntax lambda swap(x,y) : x,y = y,x
        n = len(nums)
        i, red, blue = 0,0,n-1
        while i < n:
            no = nums[i]
            if no == 0:
                nums[i], nums[red] = nums[red], nums[i]
                red += 1
                i += 1
            elif no == 1:
                i += 1
            else:
                nums[i], nums[blue] = nums[blue], nums[i]
                blue -= 1
                n -= 1
        return nums
