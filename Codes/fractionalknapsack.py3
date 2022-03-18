def fractionalknapsack(self, W,Items,n):
        array = sorted(Items, key= lambda x: (1.0 * x.value)/x.weight,reverse = True)
        i = 0
        l = len(array)
        ans = 0.0
        #print([(x.value,x.weight) for x in Items])
        while W and i < l:
            curr_w = array[i].weight
            curr_val = array[i].value
            taken_w = min(W, curr_w) 
            W -= taken_w
            #print(curr_w, curr_val, ans)
            ans = ans + (curr_val * taken_w)/curr_w
            i += 1 
        return ans
            
