from sys import stdin
def merge(arr, l, mid, r,ans):
    
    i = l
    j = mid + 1
    temp = []
    while i<=mid and j <=r:
        if arr[i] <= arr[j]:
            temp.append(arr[i])
            i += 1
        else:
            temp.append(arr[j])
            ans[0] += mid - i + 1 # not j - i + 1, mid cause a[l:mid] > j as subarray are sorted
            j += 1
    while i<=mid:
        temp.append(arr[i])
        i += 1
   
    while j<=r:
        temp.append(arr[j])
        j += 1

    arr[l:l+len(temp)] = temp[:]    # this statement copying array , right side[:]

def mergesort(arr, l, r,ans):
    if l>=r:
        return 0
    mid = (l + r)//2
    mergesort(arr,l,mid,ans)
    mergesort(arr,mid+1,r,ans)
    merge(arr,l, mid, r,ans)
    
def getInversions(arr, n) :
	# Write your code here
    ans = [0]   #passing ans as list cause call by value is default for python
    mergesort(arr,0,n-1, ans)
    #print(arr)
    return ans[0]
	
    

# Taking inpit using fast I/O.
def takeInput() :
    n = int(input())
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return arr, n

# Main.
arr, n = takeInput()
print(getInversions(arr, n))
