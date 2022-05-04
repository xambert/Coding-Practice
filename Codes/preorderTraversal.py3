def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        stack = []
        res = []
        head = root
        while stack or head :
            
            if head:
                stack.append(head)
                res.append(head.val)
                head = head.left
            else:
                head = stack.pop()
                head = head.right
        return res
            
            
        
