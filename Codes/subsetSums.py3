	def subsetSums(self, arr, N):
		# code here
		if N<2:
		    return [0] + arr
		n= 2 ** N
		subsets = [0,arr[0]]
		for num in range(2,n):
		    binary = bin(num)[2:]
		    binary = binary[::-1] #reverse
		    s = 0
		    for index,val in enumerate(binary):
		        s += arr[index] if val=="1" else 0
		    subsets.append(s)
		return subsets
