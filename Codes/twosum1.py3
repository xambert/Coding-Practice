class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        vis = {}
        ans = []
        for i,n  in enumerate(nums):
            hashmap[n] = []  # #indexes
        for i,n in enumerate(nums):
            hashmap[n].append(i)
            vis[n] = 0
        for i,n in enumerate(nums):
            m = target - n
            if m in nums and not vis[m] and not vis[n]:
                for i in hashmap[m]:
                    for j in hashmap[n]:
                        if i!=j and [j,i] not in ans:
                            ans.append([i,j])
                vis[m] = vis[n] = 1
                
        return ans[0]
