int longestKSubstr(string s, int k) {
    // your code here
    vector<int> mp(26,0);
    int i, j, ans, cnt=0, n;
    ans=-1;
    i=0;
    j=0;
    n=s.length();
    while(i<n)
    {
        if(!mp[s[i]-97]++) cnt++;
        if(cnt==k) ans = max(ans, i-j+1);
        else if(cnt==k+1)
        {
            while(j<i)
            {
                if(!(--mp[s[j++]-97])) { cnt--;break; }
            }
        }
        i++;
    }
    return ans;
    }
