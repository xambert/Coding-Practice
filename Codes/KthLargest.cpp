class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > q;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int &n : nums) add(n);
    }
    
    int add(int val) {
        if(q.size() < k)
        {
            q.push(val);
        }
        else if(val > q.top())
            {
                    q.pop();
                    q.push(val);
            }
        return q.top();
    }
};
