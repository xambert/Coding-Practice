class MaxDeQue {
    public:
    deque<int> s;
    MaxDeQue(){
    }
    void push(int val)
    {
        while(!s.empty() and (val > s.back())) s.pop_back();
        s.push_back(val);
    }
    
    void pop(int val)
    {
        if(getMax() == val)
        s.pop_front();
    }
    int getMax()
    {
        return s.front();
    }
    void print()
    {
        deque <int> v = s;
        while(!v.empty())
        {
            cout<<v.front()<<" ";
            v.pop_front();
         }
        cout<<"\n";
    }
};


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            int i;
            MaxDeQue maxW;
            vector<int> res;
            for(i = 0; i<k; i++)
            {
                maxW.push(nums[i]);
            }
            res.push_back(maxW.getMax());
            for(i=k;i<nums.size();i++)
            {
                maxW.pop(nums[i-k]);
                maxW.push(nums[i]);
                res.push_back(maxW.getMax());
            }
            return res;
           }
};
