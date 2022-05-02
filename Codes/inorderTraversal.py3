def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        
        res = [] 
        stack = []
        head = root
        while (head is not None) or (len(stack)) : 
            
            if head is not None:
                stack.append(head)
                head = head.left
                
            else:
                head = stack.pop()
                res.append(head.val)
                head = head.right
        
        return res
                
            
        
