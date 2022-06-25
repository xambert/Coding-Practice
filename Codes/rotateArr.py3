def rotateArr(self,A,D,N):
        #Your code here
        D = D%N
        A[:] = A[D:] + A[:D]
        return A
