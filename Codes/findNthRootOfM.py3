def findNthRootOfM(n,m):
    # Write your Code here.
    eps = 1e-6
    l,r = 1.0 * min(1,m), 1.0 * max(1,m)
    ans = 1.0 * (l+r)/2
    while abs(m- pow(ans,n)) >= eps:  #error1 pow(ans,n)+eps < m
        if pow(ans,n) < m:
            l = ans
        else:
            r = ans
        ans = 1.0 * (l+r)/2
    return "{:.6f}".format(round(ans,6))  #error 2 not using format
