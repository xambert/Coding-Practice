void backtrack(vector<int> a, vector<vector<int>> &res, vector<int> &subset, int remain, int n, int curr_cur)
    {
    if(curr_cur == n) return;
    for(int next_cur = curr_cur; next_cur< n; next_cur++)
    {
        if(next_cur > curr_cur and a[next_cur]==a[next_cur-1]) continue;
        int pick = a[next_cur];
        if(remain < pick) break;
        subset.push_back(pick);
        if(remain-pick == 0)
            res.push_back(subset);
        backtrack(a, res, subset, remain-pick,n, next_cur+1);
        subset.pop_back();
    }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> subset;
        int n = candidates.size();
        backtrack(candidates, res, subset, target, n, 0);
        return res;
    }
