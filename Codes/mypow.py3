    def myPow(self, x: float, n: int) -> float:
        a = 1.0
        f = n>0
        n = abs(n)
        while n :
            if n&1:
                a *=x
            x *= x
            n = n//2
        return a if f else 1/a
