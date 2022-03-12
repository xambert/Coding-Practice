class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
      hare = nums[nums[0]]
      tortoise = nums[0]
      while tortoise != hare:
        tortoise = nums[tortoise]
        hare = nums[nums[hare]]
      tortoise = 0
      while tortoise != hare:
        tortoise = nums[tortoise]
        hare = nums[hare]
      return tortoise
      
            
        
