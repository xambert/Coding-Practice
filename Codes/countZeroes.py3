def countZeroes(self, arr, n):
        # code here
        l = 0
        r = n - 1
        
        while l <= r:
            mid = (l + r)//2
            if arr[mid]:
                l = mid + 1
            else:
                r = mid - 1
        return n - l
