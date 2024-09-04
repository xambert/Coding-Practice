[Remove Duplicates from Sorted Array](https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if(nums[length-1] == nums[0]) 
            return 1;
        int head = 0;
        int next = 1;
        int ans = head;
        int index = 0;
        while(head < length)
        {
            while(next < length && nums[next] == nums[head]) next ++;
            head = next;
            nums[index++] = nums[head-1];
        }
        return index;
    }
};
