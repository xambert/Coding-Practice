 def areMirror(self,root1,root2):
        '''
        :param root1,root2: two root of the given trees.
        :return: True False
        
        '''
        #code here
        if root1 is None and root2 is None:
            return True
        elif root1 is None or root2 is None:
            return False
        elif root1.data == root2.data:
            return self.areMirror(root1.left,root2.right) and self.areMirror(root1.right, root2.left)
        
