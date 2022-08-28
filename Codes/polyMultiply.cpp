 vector<int>polyMultiply(int Arr1[], int Arr2[], int M, int N)
    {
        // code here
        vector<int> poly(M+N-1, 0);
        int i, j;
        for(i = 0; i<M;i++)
        for(j = 0; j<N;j++)
        poly[i+j] += Arr1[i]*Arr2[j];
        return poly;
    }
