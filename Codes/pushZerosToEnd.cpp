void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int not_zero = 0, swp;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]){swp=arr[i];arr[i]=arr[not_zero];arr[not_zero++]=swp;}
	    }
	}
