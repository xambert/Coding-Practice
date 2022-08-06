int n;
void backtrack(vector<int> nums, vector<vector<int>> &res, vector<int> &subset, int i)
{
if(i==n)
{
res.push_back(subset);
return;
}
subset.push_back(nums[i]);
backtrack(nums, res, subset, i+1);
subset.pop_back();
while(i+1 < n and nums[i]==nums[i+1]) i++;
backtrack(nums, res, subset, i+1);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> subset;
        backtrack(nums, res, subset, 0);
        return res;
    }
