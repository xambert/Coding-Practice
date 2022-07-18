bool find4Numbers(int A[], int n, int X)  
{
    int i, j, l, r, s;
    sort(A, A+n);
    for(i=0;i<n-3;i++)
    {
        for(j=i+1;j<n-2;j++)
        {
            l = j + 1;
            r = n - 1;
            while(l < r)
            {
            s = A[i] + A[j] + A[l] + A[r];
            if(s == X) return true;
            else if(s < X) l += 1;
            else r -= 1;
            }
        }
    }
    return false;
}
