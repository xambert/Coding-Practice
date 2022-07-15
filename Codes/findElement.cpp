int findElement(int arr[], int n) {
    int right[n+1], left = arr[0], i;
    right[n] = INT_MAX;
    for(i=n-1;i>=0;i--) right[i] = min(right[i+1], arr[i]);
    for(i=1;i<n-1;i++)
    {
        if(arr[i] >= left and arr[i] <= right[i+1]) return arr[i];
        left = max(left, arr[i]);
    }
    return -1;
}
