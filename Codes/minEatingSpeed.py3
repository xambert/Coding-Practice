def minEatingSpeed(self, piles: List[int], h: int) -> int:
        piles.sort()
        high = piles[-1]
        low = 1
        res = high
        while (low <= high):
            mid = (low + high)//2
            hours = sum([math.ceil(1.0 * x/mid) for x in piles])
            if hours <= h:
                res = mid
                high = mid - 1
            else:
                low = mid + 1 
        return res
