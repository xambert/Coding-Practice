int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int i, j,suma,sumb,sans;
        i =0;
        j = 0;
        suma = 0;
        sumb = 0;
        sans = 0;
        while(i<l1 and j<l2)
        {
            if(A[i] < B[j]) suma += A[i++];
            else if(A[i] > B[j]) sumb += B[j++];
            else 
            {
                sans += max(suma, sumb) + A[i];
                suma = 0;
                sumb = 0;
                i++;
                j++;
            }
        }
        while(i<l1) suma += A[i++];
        while(j<l2) sumb += B[j++];
        sans += max(suma, sumb);
        return sans;
    }
