int findIndex(string str) {
        // Your code goes here
        int i=0, n = str.length(), op=0, cl;
        for(auto x: str) if(x=='(') op++;
        cl = n - op;
        
        if(op == n) return 0;
        if(cl == n) return n;
        
        i=0;
        op=0; //reset opening
        while(str[i]!='\0')
        {
            if(op == cl) return i;
            if(str[i] == '(') op++;
            else cl--;
            i++;
        }
    }
