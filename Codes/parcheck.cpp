bool isValid(string s) {
        stack<char> par;
        for(char ch : s)
        {
            if(ch == '(' or ch=='{' or ch=='[') par.push(ch);
            else
            {
                if(par.empty()) return false;
                char temp = par.top();
                if ( (temp == '(' and ch != ')') or (temp == '{' and ch != '}') or (temp == '[' and ch != ']') ) return false;
                par.pop();
            }
        }
        return par.size()==0;
    }
