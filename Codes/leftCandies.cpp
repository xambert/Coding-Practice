long long leftCandies(long long n, long long m) {
    // code here
    long long range = (n * (n+1)) /2, sum=0, diff=0;
    long long rem = m % range;
    long long l = 0, r = n, mid,ami=0;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        sum = 1LL * (mid * (mid+1))/2;
        if(sum==rem) return 0;
        else if(sum<rem) { diff = sum; l = mid+1;}
        else r=mid-1;
    }
    /*
    cout<<range<<" "<<rem<<" "<<diff<< " "<<ami<<"\n";
    cout<<((ami)* (ami+1))/2<<"\n";
    */
    return (rem - diff);
}
