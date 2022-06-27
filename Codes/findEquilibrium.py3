def findEquilibrium(a,n):
    # Code here
    l,r = 0, sum(a)
    for i in range(n):
        r -= a[i]
        if l == r:
            return i
        l += a[i]
    return -1
