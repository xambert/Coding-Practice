def canJump(self, nums: List[int]) -> bool:
        max_dist = nums[0]
        n = len(nums)
        length = 1  
        if not max_dist and len(nums)>1:
            return False
        for num in nums[1:]:
            max_dist = max(num, max_dist - 1)
            length += 1
            if length == n:
                return True
            if not max_dist:
                return False
        return True
        
