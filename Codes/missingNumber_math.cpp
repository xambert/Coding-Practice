int missingNumber(vector<int>& nums) {
        int l = nums.size();
        l = (l*(l+1))/2;
        int s=0;
        for(int v: nums) s+=v;
        return l-s;
    }
