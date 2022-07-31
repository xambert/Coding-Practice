int characterReplacement(string s, int k) {
int i, nc, ans=0, n,l,mxfrq = 0;
n = s.length();
l = 0;
vector<int> frq(26,0);
for(i=0;i<n;i++)
{
++frq[s[i]-'A'];
mxfrq = max(frq[s[i]-'A'], mxfrq);
nc = i - l + 1 - mxfrq; 
if(nc<=k) ans = max(ans,mxfrq+nc);
else {--frq[s[l]-'A']; l++; }
}
return ans;
}
