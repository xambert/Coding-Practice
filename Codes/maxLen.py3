def maxLen(self, n, nums):
        #Code here
        hashmap = {}
        ans = 0
        pre = 0
        hashmap[0] = -1 #base case.. [0]
        for i,n in enumerate(nums):
            pre += n
            if pre in hashmap.keys():
                ans = max(ans, i - hashmap[pre])
            else:
                hashmap[pre] = i
        return ans
