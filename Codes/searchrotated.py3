def pivot(self, nums: List[int]) -> int:
        low = 0
        high = len(nums)-1
        while low<high:
            mid = (low + high)//2
            if nums[mid] > nums[high]:
                low = mid + 1
            else:
                high = mid
        return low
    
    def binary_search(self, nums, target, left, right) -> int:
        
        print(left, right)
        if left> right:
            return -1
        
        mid = (left + right)//2
        if nums[mid] == target:
            return mid
        if nums[mid] < target:
            return self.binary_search(nums, target, mid+1, right)
        else:
            return self.binary_search(nums, target, left, mid-1)
        
    def search(self, nums: List[int], target: int) -> int:
        p = self.pivot(nums) 
        left = 0
        right= len(nums)-1
        return max(self.binary_search(nums, target, left, p), self.binary_search(nums, target, p, right))
