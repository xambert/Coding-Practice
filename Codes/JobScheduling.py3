def JobScheduling(self,Jobs,n):
        
        # code here
        array = []
        vis = [0]*(101)
        profit = 0
        for job in Jobs:
            array.append([job.id, job.deadline, job.profit])
        array = sorted(array, key =  lambda x: x[2], reverse = True)
        for row in array:
            for dl in range(row[1], 0,-1):
                if not vis[dl]:
                    profit += row[2]
                    vis[dl] = 1
                    break
        return (sum(vis), profit)
