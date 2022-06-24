def minJumps(self, arr, n):
	    jumps = 1
	    steps = arr[0]
	    i = 0
	    j = 0
	    maxrange = 0
	    
	    if len(arr)==1:
	        return 0
	        
	        
	    while True:
	        
	        while steps:
	            steps -= 1
	            i += 1
	            if i == n-1:
	                return jumps
	            maxrange = max(maxrange, arr[i] - steps)
	            

	        if not steps:
	            #print(i, arr[i],jumps,maxrange)
	            jumps += 1
	            steps = maxrange
	            maxrange = 0
	        if not steps:
	            return -1
