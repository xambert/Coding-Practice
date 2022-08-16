string minWindow(string s, string t) {  
        if(s=="" or t=="") return "";
        unordered_map <char,int> window, frequency;
        int start = 0, end;
        int n = s.length();
        int res_length = INT_MAX;
        int l=-1,r=-1;
        for(char ch: t) frequency[ch] += 1;
        int need = frequency.size(), have = 0;
        for(end = 0; end < n; end++)
            {
            window[s[end]] += 1;
            if(window[s[end]] == frequency[s[end]]) have += 1;
            while(have == need)
                {
                    if(end-start+1 < res_length) 
                    {
                                    res_length = end-start+1;
                                    l = start;
                                    r = end;
                    }
                if(window[s[start]] == frequency[s[start]]) have -= 1;
                window[s[start]] -= 1;
                start += 1;
                }
            }
        if(l==-1 or r==-1) return "";
        //substr works as begin, no.of characters
        return s.substr(l, r-l+1);
    }
