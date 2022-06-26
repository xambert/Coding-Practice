def frequencyCount(self, arr, N, P):
        # code here
        ind,i = 0,0
        while i<N:
            ind = arr[i] - 1
            if ind >=N:
                arr[i] = 0
            elif arr[i] >0 and arr[ind]>0:
                arr[i] = arr[ind]
                arr[ind] = -1
            elif arr[i] > 0:
                arr[ind] -= 1
                arr[i] = 0
                i += 1
            else:
                i += 1
        arr[:] = [abs(x) for x in arr]
