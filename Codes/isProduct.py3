def isProduct(self, arr, n, x):
        # code here
        mp = {}
        if not x and x in arr:
            return True
        elif not x:
            return False
        else:
            for a in arr:
                if not a:
                    continue
                elif not x%a and x//a in mp:
                    return True
                elif not x%a:
                    mp[a] = 1
        return False
