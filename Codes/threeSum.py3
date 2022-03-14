class Solution:

    def threeSum(self, nums: List[int]) -> List[List[int]]:
        p = []
        n = []
        z = 0
        ans = set()
        for x in nums:
            if x>0:
                p.append(x)
            elif x<0:
                n.append(x)
            else:
                z += 1
        setn = set(n)
        setp = set(p)
        if z:
            for neg in setn:
                if abs(neg) in setp:
                    ans.add(tuple([neg, 0, abs(neg)]))
                    
        if z>2: ans.add(tuple([0,0,0]))
        for i in range(len(n)-1):
            for j in range(i+1, len(n)):
                if abs(n[i] + n[j]) in setp:
                    lst = sorted([n[i], n[j], abs(n[i] + n[j])])
                    ans.add(tuple(lst))
                    
        for i in range(len(p)-1):
            for j in range(i+1, len(p)):
                if -1 * (p[i] + p[j]) in setn:
                    lst = sorted([p[i], p[j], -1 * (p[i] + p[j])])
                    ans.add(tuple(lst))
                    
        
        
        return ans
        
        
