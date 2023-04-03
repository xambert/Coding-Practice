    vector<int> getConcatenation(vector<int>& nums) {
        int i, n;
        n = nums.size();
        for(i = 0; i < n; i += 1)
            {
                nums.push_back(nums[i]);
            }
        return nums;
    }
