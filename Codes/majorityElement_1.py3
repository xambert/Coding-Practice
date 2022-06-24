def majorityElement(self, A, N):
        #Your code here
        cnt = 0
        me = 0
        for x in A:
            if not cnt:
                me = x
                cnt += 1
            elif me !=x:
                cnt -= 1
            else:
                cnt += 1
        cnt = 0
        for x in A:
            if x==me:
                cnt+=1
        
        if cnt > N//2:
            return me
        return -1
