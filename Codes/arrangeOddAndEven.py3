def arrangeOddAndEven(self, arr, n):
        # Your code goes here
        even,odd = [], []
        for val in arr:
            if val%2==0:
                even.append(val)
            else:
                odd.append(val)
        res = []
        while even and odd:
            res.append(even.pop(0))
            res.append(odd.pop(0))
        while even:
            res.append(even.pop(0))
        while odd:
            res.append(odd.pop(0))
        return res
