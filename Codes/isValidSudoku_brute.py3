def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        row = len(board)
        col = len(board[0])
        for i in range(row):
            cnt = [0]*9
            #print(cnt)
            for j in range(col):
                if board[i][j] in "123456789":
                    asc = ord(board[i][j])-ord("1")
                    cnt[asc] += 1
                    if cnt[asc] > 1:
                        return False
            #print(cnt)
                    
        for i in range(col):
            cnt = [0]*9
            for j in range(row):
                if board[j][i] in "123456789":
                    asc = ord(board[j][i])-ord("1")
                    cnt[asc] += 1
                    if cnt[asc] > 1:
                        return False
        
        for i in range(0,row,3):
            for j in range(0,col,3):
                cnt = [0]*9
                for k in range(i,i+3):
                    for l in range(j, j+3):

                        if board[k][l] in "123456789":
                            asc = ord(board[k][l])-ord("1")
                            cnt[asc] += 1
                            if cnt[asc] > 1:
                                return False                    
                
        return True
