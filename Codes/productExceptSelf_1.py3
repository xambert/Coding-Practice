def productExceptSelf(self, nums, n):
        #code here
        suff, pre = 1,1
        res =[]
        for val in nums:
            res.append(suff)
            suff *= val
        for i in range(n-1, -1,-1):
            res[i]*=pre
            pre *= nums[i]
        return res
