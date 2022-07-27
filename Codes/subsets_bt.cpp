void backtrack(vector<int> &copy, vector<vector<int>> &res, int i,vector<int> &nums)
    {
        if(i>=nums.size())
        {
            vector<int> v(copy.begin(),copy.end());
            res.push_back(v);
            return;
        }
        copy.push_back(nums[i]);
        backtrack(copy, res, i+1,nums);
        copy.pop_back();
        backtrack(copy, res, i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        /*
        [1,2,3]
        [1] ||| []
        [2],[] ||| [2],[]
        [3],[] | [3],[] ||| [3],[] | [3],[]
        [1,2,3], [1,2], [1,3], [1], [2,3],[3],[2],[]
        */
        vector<int> copy;
        //for(int x: copy) cout<<x<<"-\n";
        vector<vector<int>> res;
        int n = copy.size();
        backtrack(copy, res, 0, nums);
        return res;
    }
