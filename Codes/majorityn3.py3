class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        count1 = 0
        count2 = 0
        m1, m2 = 1,0 #0,0 fails at [0,0,0]
        n = len(nums)
        for x in nums:
            if x == m1:
                count1 += 1
            elif x == m2:
                count2 += 1
            elif count1==0:
                m1 = x
                count1 = 1
            elif count2==0:
                m2 = x
                count2 = 1
            else:
                count1 -= 1
                count2 -= 1
        ans= []
        if nums.count(m1) >n//3:
            ans.append(m1)
        if nums.count(m2) > n//3:
            ans.append(m2)
        return ans
                
