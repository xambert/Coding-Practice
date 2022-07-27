vector<vector<int>> subsets(vector<int>& nums) {
        /*
        1,2
        res = [], 1,2,[1,2] = 2 ^ n
        -, 0, 1, [0,1]
        
        00
        01 
        10
        11
        
        01&01 = 1
        10&10 = 2
        */
        int i,n,j;
        n = nums.size();
        vector<vector<int>> res(1<<n, vector<int>());
        for(i=1;i<pow(2,n);i++)
        {
            for(j=0;j<n;j++)
            {
                if((1<<j) & i) res[i].push_back(nums[j]);
            }
        }
        return res;
    }
