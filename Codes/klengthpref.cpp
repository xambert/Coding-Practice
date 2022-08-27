int klengthpref(string arr[], int n, int k, string str){    
        string cmp = str.substr(0,k);
        int res = 0;
        for(int i=0;i<n;i++)
        {
            
            if(arr[i].length() >= k and arr[i].substr(0,k)==cmp) res++;
        }
        return res;
    }
