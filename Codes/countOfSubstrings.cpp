int countOfSubstrings(string s, int K) {
        // code here
        int i, n,cnt, clr, j, l, ans =0; 
        vector<int> mp(257,0);
        n = s.length();
        i=0;
        cnt=0;
        //window
        while(i<K)
        {
            if(!mp[s[i]]++) cnt++;
            i++;
        }
        if(cnt==K-1)
        { //cout<<s.substr(0,K)<<"\n";
        ans++;}
        i=1;
        //sliding starts
        while(i<=n-K)
        {
            if(mp[s[i-1]]-- ==1) cnt--;
            if(!mp[s[i+K-1]]++) cnt++;
            if(cnt==K-1)
            { //cout<<i<<" "<<i+K<<" "<<s.substr(i,K)<<"\n"; 
            ans++;}
            i++;
        }
        return ans;
    }
