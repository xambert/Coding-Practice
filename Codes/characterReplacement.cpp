vector<int> max_frequency(vector<int> v)
{
vector<int> ret(2,0);
int cnt = 0;
for(int j=0;j<26;j++) 
{
if(cnt<v[j]) { cnt = v[j]; ret = {cnt, j}; 
}
}
return ret;
}
    
int characterReplacement(string s, int k) {
int i, nc, ans=0, n,el,l;
n = s.length();
l = 0;
vector<int> frq(26, 0 ), mxfrq(2,0), res(2,0);
for(i=0;i<n;i++)
{
++frq[s[i]-'A'];
mxfrq = max_frequency(frq);
nc = i - l + 1 - mxfrq[0];
cout<<s[i]<<" "<<mxfrq[0]<<" "<<nc<<" "<<l<<" "<<"\n";
if(nc<=k){ if(mxfrq[0]+nc > ans){ ans = mxfrq[0]+nc; el =mxfrq[1]; res = {l,i};}}
else {--frq[s[l]-'A']; l++; }
}
return ans;
}
