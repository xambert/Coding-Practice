def rearrange(self,arr, n):
        # code here
        pos,neg,res = [], [], []
        for x in arr:
            if x>=0:
                pos.append(x)
            else:
                neg.append(x)
        
        while pos and neg:
            res.append(pos.pop(0))
            res.append(neg.pop(0))
        while pos:
            res.append(pos.pop(0))
        while neg:
            res.append(neg.pop(0))
        arr[:] = res
