def maxVal(self, a, n):
        #Code Here
        mn,mx = float("inf"), -float("inf")
        for i,x in enumerate(a):
            mn = min(mn, x-i)
            mx = max(mx, x-i)
        return mx-mn
