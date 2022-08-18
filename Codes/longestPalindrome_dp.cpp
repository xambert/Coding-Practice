string longestPalindrome(string s) {
        /*
        babad
        
        a
        aa
        aba
        cvgabacfghjhj
        0,0 = 1
        0,1 = 0 0 != 1
        0,2 = 0 0 != 2
        3,3 = 1
        4,4 = 1
        5,5 = 1
        3,4 = 0
        4,5 = 0
        3,4,5 = 1 3==5 and dp[4][4]
        
        dcxabaxcfd
        4,4 = 1 b
        3,5 = aba s==5 and 4,4
        2,6 = 2==6 and 3,5
        ecaba
            0 1 2 3 4
        0   1 0 0 0 0
        1   - 1 0 0 0
        2   - - 1 0 1
        3   - - - 1 0
        4   - - - - 1
        xabax
            0 1 2 3 4
        0   1 0 0 0 1&(1,3)
        1   - 1 0 1&(2,2) 0
        2   - - 1 0 0
        3   - - - 1 0
        4   - - - - 1
        cdfaae
            5 4 3 2 1 0
        5   1 - - - - -
        4   0 1 - - - -
        3   0 1 1 - - -
        2   0 0 0 1 - -
        1   0 0 0 0 1 -
        0   0 0 0 0 0 1
        */
        int n = s.size();
        vector<vector<bool>> dp(n+5, vector<bool>(n+5));
        int i , j;
        int reslen = 0;
        vector<int> res = {0,0};
        for(i = n - 1; i >= 0; i--)
            {
                for(j = i; j < n; j++)
                    {
                        if(i == j) dp[i][j] = 1;
                        else if(j == i + 1 and s[i]==s[j]) dp[i][j] = 1;
                        else if(s[j] == s[i] and dp[i + 1][j - 1]) dp[i][j] = 1;
                        else dp[i][j] = 0;
                    
                        if(dp[i][j] and reslen < j - i + 1)
                        {
                            reslen = j - i + 1;
                            res = {i, j};
                        }
                    }
            }
        return s.substr(res[0] , res[1] - res[0] + 1);
    }
