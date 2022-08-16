int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        int mid = 0;
        while(l < h)
        {
            mid = (l + h)/2;
            if(nums[mid] == nums[h]) h -= 1;
            else if(nums[mid] > nums[h]) l = mid + 1;
            else h = mid;
        }
        return nums[l];
    }
