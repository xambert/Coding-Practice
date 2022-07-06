def maxArea(self, a: List[int]) -> int:
        l,r = 0, len(a)-1
        ans = -float("inf")
        while l<r:
            ans = max(ans,(r-l) * min(a[r], a[l]))
            if a[l]<a[r]:
                l+=1
            else:
                r-=1
        return ans
