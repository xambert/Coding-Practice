int minEnergy(int a[], int n)
    {
        // Your code goes here
        int en = 0, minen=0;
        for(int i=0;i<n;i++)
        {
            en = en + a[i];
            if(en < 1) { minen = max(abs(en), minen);}
        }
        return minen+1;
        
    }
