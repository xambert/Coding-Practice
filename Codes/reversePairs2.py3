class Solution:
    def __init__(self):
        self.val = 0
        
    def mergesort(self, nums, l, r):
        if l>=r:
            return 0
        mid = (l +r)//2
        self.mergesort(nums,l,mid)
        self.mergesort(nums, mid+1, r)
        i,j = l, mid+1
        #no of elements = r- l + 1; so rightmost lim = r+1
        while i<=mid and j<=r:
            if nums[i] > 2*nums[j]:
                #print(i, mid, j, nums)
                self.val += mid - i + 1
                j += 1
            else:
                i += 1
        nums[l:r+1] = sorted(nums[l:r+1])[:]
        return self.val
        
    def reversePairs(self, nums: List[int]) -> int:
        self.mergesort(nums,0,len(nums)-1)
        return self.val
        
    

            
