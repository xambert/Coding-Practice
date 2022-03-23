    def getPermutation(self, n: int, k: int) -> str:
      nums = [i for i in range(1, n+1)]
      fact = [1]
      for num in nums:
        fact.append(fact[-1]*num)
      result = ""
      k -= 1  #indexing starts from 0
      while n>0:
        n -= 1
        ind = k//fact[n] 
        result += str(nums[ind])
        print(k, ind)
        k = k % fact[n] 
        del nums[ind]
      return "".join(map(str,result))
