def mergeArrays(self,a,b,n,m):
        '''
        :param a: given sorted array a
        :param n: size of sorted array a
        :param b: given sorted array b
        :param m: size of sorted array b
        :return:  The union of both arrays as a list
        '''
        # code here 
        i = j = 0
        ans = []
        
        while i < n and j < m:
            
            while (i < n-1) and (a[i]==a[i+1]): i+=1
            while (j < m-1) and (b[j]==b[j+1]): j+=1
            
            if a[i] < b[j]:
                ans.append(a[i])
                i += 1
            elif b[j] < a[i]:
                ans.append(b[j])
                j += 1
            else:
                ans.append(a[i])
                i += 1
                j += 1
                
        while i < n:
            while (i < n-1) and (a[i]==a[i+1]): i+=1
            ans.append(a[i])
            i += 1
            
        while j < m:
            while (j < m-1) and (b[j]==b[j+1]): j+=1
            ans.append(b[j])
            j += 1
            
        return ans
