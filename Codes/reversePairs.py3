def ms(self, nums, l , r, ans):
        if l>=r:
            return 0
        mid = (l+r)//2
        self.ms(nums, l, mid, ans) + self.ms(nums, mid+1, r, ans)
        i,j = l,mid+1
        while i<=mid and j<=r:
            if nums[i] > 2*nums[j]:
                #print(i, mid,j, nums)
                ans[0] += mid - i + 1
                j += 1
            else:
                i += 1
        #nums[l:r] = sorted(nums[l:r])[:]
        i = l
        j = mid + 1
        temp = []
        while i<=mid and j <=r:
            if nums[i] < nums[j]:
                temp.append(nums[i])
                i += 1
            else:
                temp.append(nums[j])
                #ans[0] += mid - i + 1 # not j - i + 1, mid cause a[l:mid] > j as subarray are sorted
                j += 1
        while i<=mid:
            temp.append(nums[i])
            i += 1
   
        while j<=r:
            temp.append(nums[j])
            j += 1

        nums[l:l+len(temp)] = temp[:]
        return ans[0]
    
    def reversePairs(self, nums: List[int]) -> int:
        ans = [0]
        self.ms(nums, 0, len(nums)-1, ans)
        #print(nums)
        return ans[0]
