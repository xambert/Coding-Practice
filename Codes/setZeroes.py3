def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m,n = len(matrix), len(matrix[0])
        f = False
        for i in range(m):
            if not matrix[i][0]: f = True
            for j in range(1,n):        #using 1st row as flag
                if not matrix[i][j]:
                    matrix[i][0] = matrix[0][j] = 0
        
        for i in range(m-1,-1,-1):
            for j in range(n-1, 0, -1):
                if not matrix[i][0] or not matrix[0][j]: matrix[i][j]=0
            if f: matrix[i][0]=0
