int removeElement(vector<int>& nums, int val) {
        /*
        1 2 2 3
        r = 3
        n = 4
        r = 2 1 3 2 2
        r = 1 1 3 2 2
        n - r - 1 = 2
        n - n + r - 1
        */
        int n = nums.size();
        int r = n - 1;
        int l = 0;
        while( l <= r )
        {
            if(nums[l] == val)
            {
                nums[l] = nums[r];
                r -= 1;
            }
            else
                l += 1;
        }
        return r + 1;

    }
