class Solution:
    def __init__(self):
      self.res = []
      
    def convert(self, string):
      return ["".join(s) for s in string]
    
    def valid(self, nqueen, row, col, n):
      for i in range(row):
        if nqueen[i][col] == 'Q':
          return False
      c = 1
      while row-c>=0 and col-c>=0 :
        if nqueen[row-c][col-c]=='Q':
          return False
        c += 1
      c = 1
      while row-c>=0 and col+c<n :
        if nqueen[row-c][col+c]=='Q':
          return False
        c += 1
      return True
    
    
    def getRes(self, nqueen, row, n):
      if row==n:
        self.res.append(self.convert(nqueen))
        return
      
      for col in range(n):
        if(self.valid(nqueen, row, col, n)):
          nqueen[row][col] = 'Q'
          self.getRes(nqueen, row+1, n)
          nqueen[row][col] = '.'
        
        
      
      
      
    def solveNQueens(self, n: int) -> List[List[str]]:
      nqueen = [['.' for x in range(n)] for u in range(n)]
      self.getRes(nqueen, 0, n)
      return self.res
        
