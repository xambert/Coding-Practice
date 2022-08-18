class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    MedianFinder() {
        
        /*
        val left right
        1   1   -
        2   1 2
        B   1      2
        3   1 3    2
        */
    }
    void balance()
    {
        if(left.size()>right.size()+1)
        {
            right.push(left.top());
            left.pop();
        }
        if(!right.empty() and left.top() > right.top())
        {
            int l = left.top();
            int r = right.top();
            left.pop();
            right.pop();
            left.push(r);
            right.push(l);
            
        }
        
    }
    void addNum(int num) {
        left.push(num);
        balance();
        
    }
    
    double findMedian() {
        if(left.size() == right.size()) return (left.top() + right.top())/2.0;
        else return left.top();
    }
};

