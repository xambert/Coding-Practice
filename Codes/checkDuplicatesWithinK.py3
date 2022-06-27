def checkDuplicatesWithinK(self,arr, n, k):
		# code here
		hm = {}
		for i,x in enumerate(arr):
		    if x in hm and i - hm[x] <= k:
		        return True
		    hm[x] = i
		return False
