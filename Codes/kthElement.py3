    def kthElement(self,  arr1, arr2, n, m, k):
        i = 0 
        j = 0
        ans = arr1[0]
        while k and i<n and j<m:
            if arr1[i] < arr2[j]:
                ans = arr1[i]
                i += 1
                
            else:
                ans = arr2[j]
                j += 1
            #print(ans)
            k -= 1
        while k and i<n:
            ans = arr1[i]
            i += 1
            k -= 1
        
        while k and j<m:
            ans = arr2[j]
            j += 1
            k -= 1
            
        return ans
        
