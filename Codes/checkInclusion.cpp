 bool check(vector<int> v)
    {
        for(int x: v) if(x) return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> freq(26, 0);
        for(char ch: s1) freq[ch-'a']++;
        int ws = s1.size(), i;
        for(i=0 ;i< ws;i++)
        {
            freq[s2[i]-'a']--;
        }
        if(check(freq)) return true;
        /*
        abcd cd
        ab0
        bc1
        cd2
        4-2
        */
        for(i=1;i<=s2.length()-ws;i++)
        {
            freq[s2[i-1]-'a']++;
            freq[s2[i+ws-1]-'a']--;
            if(check(freq)) return true;
        }
        return false;
    }
