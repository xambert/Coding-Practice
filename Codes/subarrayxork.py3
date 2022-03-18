def solve(self, A, B):

        hashmap = {}
        xor = 0
        result = 0
        for i,n in enumerate(A):
            xor = n ^ xor
            if xor == B:
                result += 1
            if xor^B in hashmap:
                result += hashmap[xor^B]
            hashmap[xor] = hashmap.get(xor,0) + 1
        return result
            
