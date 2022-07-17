def removeDuplicates(self, arr):
        # code here 
        p = 1
        ans = []
        for x in arr:
            if p%x:
                p*=x
                ans+= [x]
        return ans
