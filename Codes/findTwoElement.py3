def findTwoElement( self,arr, n): 
        # code here
        s1 = sum(arr)
        s2 = sum([x**2 for x in arr])
        sum1 = (n *( n + 1))//2
        sum2 = (n *( n + 1) * (2*n + 1))//6
        diff1 = sum1-s1
        diff2 = sum2-s2
        div = diff2 // diff1
        miss = (div + diff1)//2
        rep = div - miss
        return [rep, miss]
