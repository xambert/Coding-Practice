int operate(int a, int b, char ch)
    {
        if(ch=='+') return a+b;
        if(ch=='-') return a-b;
        if(ch=='*') return a*b;
        return a/b;
    }
    int evalRPN(vector<string>& tokens) {
            stack<int> s;
        for(auto c: tokens)
        {
            if(c=="+" or c=="/" or c=="-" or c=="*")
            {
                int a,b;
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                s.push(operate(a,b,c[0]));
            }
            else
            {
                s.push(stoi(c));
            }
        }
        return s.top();
    }
