def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        n =len(candidates)
        def findsum(i,subset,s):
            if i==n or s>target:
                return 
            if(s==target):
                res.append(subset.copy())
                return
            
            subset.append(candidates[i])
            findsum(i,subset ,s+candidates[i])
            subset.pop()
            findsum(i+1, subset,s)
        res = []
        findsum(0,[],0)
        return res
