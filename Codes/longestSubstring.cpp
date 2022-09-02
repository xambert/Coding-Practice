int longestSubstring(string S) {
        // code here
        /*
        aab
        a 01
        ab 11
        aba 10
        
        abadaaceaae
        firstseen
        00000 = 0
        00001  = 0
        00011 = 1
        00010 = 2
        01010 = 
        01011
        01010 --- [00010, 01000]
        01110
        11110
        11111
        11110 ---- [01110, 10110, 11010, 11100, 11111]
        01110 ----
        */
        int mask = 0;
        unordered_map<int, int> index;
        index[0] = -1;
        int i, l = S.length(), ch, j, ans = 1;
        for(i = 0; i < l; i++)
        {
            ch = S[i] - 'a';
            mask = mask ^ (1<<ch);
            if(index.find(mask) != index.end()) //check even
            ans = max(ans, i - index[mask]);
            else index[mask] = i;
            for(j=0;j<26;j++)
            {
                if(index.find(mask ^ (1<<j)) != index.end()) //check odd
                {
                ans = max(ans, i - index[mask ^ (1<<j)]);
                }
            }
            
            
        }
        return ans;
        
        
    }
