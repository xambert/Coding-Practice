int search(vector<int>& nums, int target) {
        /*
        0,1,2,3,4
        4,0,1,2,3
        3,4,0,1,2
        2,3,4,0,1
        5,4,3,2,1
        
        l, mid, r
        
        l<mid : -
        r<mid : Y
        mid<l : Y
        mid<r : -
        */
        int n = nums.size();
        int left = 0, right = n-1, mid = 0, tempmid = 0;
        while(left < right)
        {
            mid = (left + right)/2;
            if(nums[mid] > nums[right]) left = mid + 1;
            else right = mid;
        }
        int k = left;
        left = 0;
        right = n-1;
        while(left<=right)
        {
            mid = (left + right)/2;
            tempmid = (mid+k)%n;
            if(nums[tempmid] == target) return tempmid;
            else if(nums[tempmid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
