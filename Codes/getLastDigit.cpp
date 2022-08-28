int getLastDigit(string a, string b) {
        // code here
        if(b=="0") return 1;
        int m = a.length();
        int n = b.length();
        int lastdig = a[m-1]-48;
        int cmp = 0;
        int mul = lastdig;
        int i;
        int ans = 1;
        
        if((lastdig == 0) or (lastdig == 1) or (lastdig == 6) or (lastdig == 5)) return lastdig;
        
        while(true)
        {
            mul *= lastdig;
            mul %= 10;
            cmp ++;
            if(mul == lastdig) break;
        }
        //int mod = (b[n-1] - 48)%cmp;
        int mod = 0;
        for(i = 0; i < n ; i++)
        {
            mod = (mod * 10 + (b[i]-48))%cmp;
            //mod = (mod + (b[i] - 48) * 10)%cmp;
        }
        if(!mod) mod = cmp;
        while(mod--) ans = (lastdig * ans) % 10;
        return ans;
    }
