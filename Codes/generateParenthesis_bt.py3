def generateParenthesis(self, n: int) -> List[str]:
        """
        n = 3
        open and close
                        (   |
                        ((  ||||| ()
                        ((( |||| (() ||||| ()(
                        ((() |||| (()( ||| (()) ||||| ()(( ||| ()()
                        ((())) ||| (()()) ||| (())() ||| ()(()) ||| ()()()
        
        if close < open;
        can add- (
        
        
        """
        result = []
        def generate(n : int, op : int, cl : int, subset : List[str]):
            
            if op > n or cl > n:
                return
            if op == n and cl == n:
                result.append("".join(subset.copy()))
                subset = []
                return
            
            if op < n:
                generate(n , op + 1, cl, subset+["("])
            
            if cl < op:
                generate(n , op , cl + 1, subset+[")"])
        
        generate(n, 0, 0, [])
        return result
