def valid(self, board, i,j, val, n):
        
        #row
        for row in range(n):
            if board[row][j]==val:
                return False
        #column
        for col in range(n):
            if board[i][col]==val:
                return False
        #submat
        li = 3* (i//3)
        lj = 3 *(j//3)
        for row in range(li, li+3):
            for col in range(lj, lj + 3):
                if board[row][col] == val:
                    return False
        
        return True
    
    def solve(self, board, row, col, n):
        
        for i in range(n):
            for j in range(n):
                if board[i][j] == '.':
                    for num in "123456789":
                        if self.valid(board, i, j, num, n):
                            board[i][j] = num
                            if(self.solve(board, i, j, n)):
                                return True
                            else:
                                board[i][j] = '.'
                    return False #key
                
        return True
        
        
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        self.solve(board, 0, 0, len(board))
