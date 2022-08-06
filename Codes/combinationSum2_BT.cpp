    void backtrack(vector<int> a, vector<vector<int>> &res, vector<int> &subset,int  total, int target, int n, int i)
    {
        if(total == target)
        {
            res.push_back(subset);
            return;
        }
        if(total > target or i==n)
            return;
        subset.push_back(a[i]);
        backtrack(a, res, subset,total+a[i],target,n,i+1);
        subset.pop_back();
        while(i+1 < n and a[i]==a[i+1]) i++;
        backtrack(a, res, subset,total,target,n,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> subset;
        int n = candidates.size();
        backtrack(candidates, res, subset, 0, target, n, 0);
        return res;
    }
