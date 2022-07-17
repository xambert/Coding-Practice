def printKClosest(self, arr, n, k, x):
        # code here
        l,r=0,n-1
        ub = n-1
        ans = []
        while l <=r:
            mid = (l + r)//2
            if(arr[mid]>=x):
                ub = mid
                r = mid - 1
            else:
                l = mid + 1
        r = ub
        l = ub - 1
        if arr[ub] == x:
            r += 1              
        #print(l,r,arr[l], arr[r])
        while k and l>=0 and r<n:
            
            if(abs(arr[r]- x) <= abs(x - arr[l])):
                ans.append(arr[r])
                r += 1
            else:
                ans.append(arr[l])
                l -= 1
            
            k -= 1
        
        while k and l>=0:
            ans.append(arr[l])
            l -= 1
            k -= 1
        
        while k and r<n:
            ans.append(arr[r])
            r += 1
            k -= 1
        
        return ans
