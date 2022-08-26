https://practice.geeksforgeeks.org/problems/maximum-gcd-of-siblings-of-a-binary-tree/1?page=1&difficulty[]=0&status[]=unsolved&company[]=Samsung&sortBy=latest
int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        // code here
        if(N==1) return 0;
        int res = 0;
        unordered_map<int,int> mp, ch;
        for(int i=0;i<N-1;i++)
            {
                //if(mp.find(arr[i][0]) == mp.end()) mp[arr[i][0]]=0;
                mp[arr[i][0]] = __gcd(mp[arr[i][0]], arr[i][1]);
                ch[arr[i][0]]++;
                if(ch[arr[i][0]] == 2)
                    res = max(res, mp[arr[i][0]]);
            }
        return res;
    }
