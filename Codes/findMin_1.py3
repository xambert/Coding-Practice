def findMin(self, nums: List[int]) -> int:
        l = 0
        n = len(nums)
        h = n-1
        pivot = 0
        if nums[l]<=nums[h]:
            return nums[l]
        while l<=h:
            mid = (l + h )//2
            if(mid>0 and nums[mid] < nums[mid-1]):
                pivot = mid
                break
            if(mid<n and nums[mid] > nums[mid+1]):
                pivot = mid + 1
                break
            if(nums[mid] < nums[l]):
                h = mid-1
            elif(nums[mid] > nums[h]):
                l = mid+1
        return nums[pivot]
            
        """
            0,1,2,3,4
            
            0,2,4   :   
            
            4,0,1,2,3
            
            4,1,3   :      1<4, 1>0
            
            3,4,0,1,2
            
            3,0,2   :   0<3, 0<4
            
            2,3,4,0,1
            
            2,4,1   :   4>1, 4>0
            
            1,2,3,4,0
            
            1,3,0   :   3>0, 3<4
            
            Rotation:
            1: mid<low / high = mid mid < mid-1
            2: mid>high / low = mid mid > mid + 1 
            
            
            
            
            
            
        """
