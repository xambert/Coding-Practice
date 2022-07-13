vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here
        vector<pair<int,int>> ans;
        sort(A, A+N);
        sort(B,B+M);
        int l=0, r=M-1,s=0;
        while(l<N and r>=0)
        {
            s = A[l]+B[r];
            if(s==X) { ans.push_back({A[l], B[r]}); l++;r--;}
            else if(s<X) l++;
            else r--;
        }
        return ans;
    }
