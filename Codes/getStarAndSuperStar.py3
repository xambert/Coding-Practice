def getStarAndSuperStar(arr, n):
    # code here
    mx = -float("inf")
    mxcnt = 1
    right = []
    for x in arr[::-1]:
        if x == mx:
            mxcnt = 0
        elif x>mx:
            mx = x
            right.append(mx)
            mxcnt = 1
    if mxcnt:
        right = [mx] + right[::-1]
    else:
        right = [-1] + right[::-1]
        
    return right
