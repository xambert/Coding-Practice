def smallestSubWithSum(self, a, n, x):
        # Your code goes here 
        s = 0
        ans = float("inf")
        j = 0
        for i in range(n):
            s += a[i]
            while (s - a[j] > x) and (j<i):
                s -= a[j]
                j += 1
                #print(s,x,i,j)
            if s > x:
                ans = min(ans, i-j+1)
        return ans
