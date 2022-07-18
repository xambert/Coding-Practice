string next_perm(string x)
    {
        int i,ind,n,ind2;
        n = x.length();
        i = n-2;
        while(i>=0 and x[i] >=x[i+1]) i--;
        if(i<0) return "_";
        string s="";
        ind = i;
        for(i=n-1;i>ind;i--) s = s + x[i];
        char el = x[ind];
        ind2 = s.length();
        for(i=0;i<ind2;i++) x[i+ind+1]=s[i];
        for(i=0;i<ind2;i++) if(el < s[i]) { ind2=i;}
        //cout<<x[ind]<<" "<<s[ind2]<<"\n";
        char c = x[ind];
        x[ind] = x[ind+ind2+1];
        x[ind2+ind+1]=c;
        return x;
    }
    long long getNextEven(string x)
    {
        string res = next_perm(x);
        while(res != "_")
        {
            if(!(res[res.length()-1]%2)) 
            {
                long long ans = 0;
                for(auto ch: res) ans = ans * 10 + (ch-48);
                return ans;
            }
            else
            res = next_perm(res);
        }
        return -1;
    }
