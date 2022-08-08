class MinStack {
public:
    int *stack1, *stack2;
    int capacity;
    int top1, top2;
    MinStack() {
        capacity = 1e5+2;
        top1 = -1;
        top2 = -1;
        stack1 = (int *)malloc(capacity * sizeof(stack1));
        stack2 = (int *)malloc(capacity * sizeof(stack1));
    }
    
    void push(int val) {
        stack1[++top1] = val;
        if(top2==-1 or val <= getMin()) stack2[++top2] = val;
    }
    
    void pop() {

        if(getMin()==stack1[top1]) --top2;
        --top1;
    }
    
    int top() {
        return stack1[top1];
    }
    
    int getMin() {
        return stack2[top2];
    }
};
