def longestConsecutive(self, nums: List[int]) -> int:
        hashmap = {}
        for x in nums:
            hashmap[x] = 1
        ans = 0
        for x in nums:
            if hashmap[x]:
                count = 1
                left = x-1
                right = x + 1
                while left in hashmap.keys() and hashmap[left]:
                    count += 1
                    hashmap[left] = 0
                    left -= 1
                    
                while right in hashmap.keys() and hashmap[right]:
                    count += 1
                    hashmap[right] = 0
                    right += 1
                ans = max(ans, count)
        return ans
    
