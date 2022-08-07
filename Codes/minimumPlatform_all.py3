def minimumPlatform(self,n,at,dt):
    lst = sorted(zip(at,dt), key=lambda x : x[0])
    count = 1
    ans = [[]]
    ans[count-1].append(lst[0])
    lst.pop(0)
    while len(lst) :
        value = ans[count-1][-1][1]
        add_on = True
        add_lst = []
        for x in lst:
            if value < x[0]:
                add_lst = x
                add_on = False
                break
        if add_on:
            count += 1
            ans.append([[]])
            ans[count-1].append(lst[0])
            lst.pop(0)
        else:
            ans[count-1].append(add_lst)
            lst.remove(add_lst)
    return count
