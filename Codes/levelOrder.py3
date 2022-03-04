    def levelOrder(self,root ):
        
        ans = []
        queue = [root]
        while len(queue) is not 0:
            t = queue[0]
            queue.pop(0)
            ans.append(t.data)
            if t.left: queue.append(t.left)
            if t.right: queue.append(t.right)
        return ans
