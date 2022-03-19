	def minCoins(self, coins, M, V):
		# code here

		if V in coins:
		    return 1
		inf = float("inf")
		hashmap = [inf]*(100005)
		
		for val in coins:
		    hashmap[val] = 1
		
		for i in range(1,V+1):
		    for val in coins:
		        if i > val:
		            hashmap[i] = min(hashmap[i], 1 + hashmap[i-val])
		return hashmap[V] if hashmap[V] is not inf else -1
