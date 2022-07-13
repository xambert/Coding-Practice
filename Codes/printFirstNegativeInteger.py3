def printFirstNegativeInteger( A, N, K):
    # code here
    ind = 0
    ans = []
    for i in range(K-1,N):
        while ind < i and (ind <= i-K or A[ind]>=0):
            ind += 1
        if A[ind]>=0:
            ans.append(0)
        else:
            ans.append(A[ind])
    return ans
