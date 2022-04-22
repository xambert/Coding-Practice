class Solution:
    def __init__(self):
        self.res = []
        self.x = [0,0,1,-1]
        self.y = [1,-1,0,0]
        self.way = ["R", "L", "D", "U"]
        
    def solve(self, m , i , j, s, n, vis):
        #reached the end of the matrix
        if i==n-1 and j==n-1:
            return self.res.append(s)
        
        vis[i][j] = True
        for k in range(4):
            nx = i + self.x[k]
            ny = j + self.y[k]
            if 0<=nx<n and 0<=ny<n and m[nx][ny] and not vis[nx][ny]:
                self.solve(m, nx, ny, s + self.way[k], n, vis)
                
        vis[i][j] = False        
        
    def findPath(self, m, n):
        # code here
        if m[0][0] == 0:
            return []
        vis = [[False for i in range(n)] for j in range(n)]
        s = ""
        self.solve(m,0,0,s,n, vis)
        return self.res
