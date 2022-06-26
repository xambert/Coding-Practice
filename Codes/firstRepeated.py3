def firstRepeated(self,arr, n):
        
        #arr : given array
        #n : size of the array
        hashmap = {}
        for i,val in enumerate(arr):
            hashmap[val] = hashmap.get(val,0)+1
        for i,val in enumerate(arr):
            if hashmap[val]>1:
                return i+1
        return -1
