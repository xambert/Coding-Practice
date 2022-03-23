    def reverseWords(self, s: str) -> str:
      news = s.split(" ")
      news = news[::-1]
      ans = ""
      for x in news:
        if x is not "":
          ans = ans + " " +  x
      return ans[1:]
