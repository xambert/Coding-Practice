 def __init__(self):
      self.subset = []
    
    def is_palin(self, s,start, i):
      for x,y in zip(s[start:i+1],s[start:i+1][::-1]):
        if x!=y:
          return False
      return True
    
    def dfs(self, s, pick, start):
      if len(s)==start:
        self.subset.append(pick[:])  
      for i in range(start, len(s)):
        if self.is_palin(s, start, i):
          pick.append(s[start:i+1])
          self.dfs(s, pick, i+1)
          pick.pop()
        
    def partition(self, s: str) -> List[List[str]]:
      pick = []
      self.dfs(s, pick, 0)
      return self.subset
