    def maximumMeetings(self,n,start,end):
        # code here
        """
        Sort acc to end times in descending order
        add the first item to ans list
        check for remaining, if current end time is < last ans start 
        then add that to ans 
        """
        
        new_list = sorted(zip(start, end),key =  lambda x : x[1])
        ans = []
        ans.append(new_list[0])
        for array in new_list[1:]:
            if array[0] > ans[-1][1]:
                ans.append(array)
        return len(ans)
