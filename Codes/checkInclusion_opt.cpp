 bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> freq(26, 0);
        for(char ch: s1) freq[ch-'a']++;
        int ws = s1.size(), i;
        int remain = ws;
        for(i=0 ;i< ws;i++)
        {
            //if in s1, freq>0
            if(freq[s2[i]-'a']-- >0) remain--;
        }
        if(remain==0) return true;
        //not found in curr window
        for(i=1;i<=s2.length()-ws;i++)
        {
            //if in s1 and in prev window, freq of s2[i-1] >=0
            if(freq[s2[i-1]-'a']++ >= 0) remain++; // cases ["ba", "boa"] ["adc", "adac"] 
            //if in s1 and in curr_window, 
            if(freq[s2[i+ws-1]-'a']-- > 0) remain--;
            if(remain==0) return true;
        }
        return false;
    }
