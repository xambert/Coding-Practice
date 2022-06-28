def find(a,b,q):
    cnt = 0
    res = []
    for val in q:
        cnt = 0
        for x in b:
            if x <= a[val]:
                cnt += 1
        res.append(cnt)
    return res
