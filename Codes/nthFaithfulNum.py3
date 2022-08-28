def nthFaithfulNum(self, N):
        # code here 
        res = 0
        exp = 1
        while N > 0 :
            currbit = N&1
            res = res + currbit * exp
            exp *= 7
            N = N//2
        return res
