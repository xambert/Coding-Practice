int missingNumber(vector<int>& nums) {
        int low = 0, high = nums.size(), mid;
        sort(nums.begin(), nums.end());
        while(low < high)
        {
            /*
            
            0,1,3
            1-1:1
            2-3:2
            
            */  
            mid = (low +  high)/2;
            if(nums[mid] <= mid) low = mid + 1;
            else high = mid;
        }
        return low;
    }
