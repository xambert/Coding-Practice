vector<int> leaders(int a[], int n){
        // Code here
        /*
         16, 17, 4 3. 5 , 2
         2
         5,2 = 5
         3,5,2 =-
         3,4,5,2 = -
         17,4,3,5,2 = 17
         16,17,4,3,5,2 = -
        */
        int i, curr_leader = a[n-1], m;
        vector<int> result;
        for(i = n-1; i >=0; i -= 1)
            {
                if(a[i] >= curr_leader)
                    {
                        curr_leader = a[i];
                        //cout<<curr_leader<<" "<<i<<" "<<a[i]<<" ";
                        result.push_back(curr_leader);
                    }
            }
        m = result.size();
        //cout<<m<<"\n";
        for(i = 0; i < m/2 ; i += 1)
            {
                swap(result[i], result[m - i - 1]);
            }
        return result;
            
        
    }
