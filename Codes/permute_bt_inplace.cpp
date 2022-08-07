void backtrack(vector<vector<int>> &res,vector<int>& nums, int n, int curr_index)
    {
        if(curr_index==n) { res.push_back(nums); return;}
        if(curr_index>n) return;
        
        for(int next_index = curr_index; next_index < n; next_index += 1)
        {
            swap(nums[next_index], nums[curr_index]);
            backtrack(res, nums, n,curr_index + 1);
            swap(nums[next_index], nums[curr_index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        backtrack(res, nums, n, 0);
        return res;
        
    }
