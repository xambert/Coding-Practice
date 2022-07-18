long long maxProduct(int arr[], int n) {
        // code here
        int mi[2], ma[3];
        sort(arr, arr+3);
        ma[0]=arr[0];
        ma[1]=arr[1];
        ma[2]=arr[2];
        mi[1]=arr[1];
        mi[0]=arr[0];
        for(int i=3;i<n;i++)
        {
            //find minimum- negative case, two cause -1 * -1 = positive
            if(arr[i] < mi[0])
            {
                mi[1] = mi[0];
                mi[0] = arr[i];
            }
            else if(arr[i] < mi[1]) mi[1]=arr[i];
            
            // find maximum
            if(ma[2] < arr[i])
            {
                ma[0] = ma[1];
                ma[1] = ma[2];
                ma[2] = arr[i];
            }
            else if(ma[1] < arr[i])
            {
                ma[0] = ma[1];
                ma[1] = arr[i];
            }
            else if(ma[0] < arr[i])
            {
                ma[0] = arr[i];
            }
        }
    /*
    cout<<mi[0]<<" "<<mi[1]<<" "<<ma[0]<<" "<<ma[1]<<" "<<ma[2]<<"\n";
    sort(arr,arr+n);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[n-3]<<" "<<arr[n-2]<<" "<<arr[n-1]<<"\n";
    */
    return max(1LL *mi[0]*mi[1]*ma[2], 1LL *ma[0]*ma[1]*ma[2]);
    }
