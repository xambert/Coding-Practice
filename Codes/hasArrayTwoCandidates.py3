def hasArrayTwoCandidates(self,arr, n, x):
		# code her
		mp = {}
	    for val in arr:
		    target = x - val
		    mp[target] = mp.get(target,0)
		    if mp[target]:
		        return True
            mp[val] = mp.get(val,0) + 1
	    return False
