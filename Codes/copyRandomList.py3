def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        
        #step 1 make a copy of each node
        trav = head
        while trav is not None:
            copy = Node(trav.val, trav.next)
            trav.next = copy
            trav = copy.next
            
        #step 2 assigning random pointer
        trav = head
        while trav is not None:
            if trav.random is not None:
                trav.next.random = trav.random.next
            trav = trav.next.next
            
        #step 3 get the original linked list
        ans = Node(0)
        fin = ans
        curr = head
        while curr is not None:
            ans.next = curr.next
            ans = ans.next
            curr = curr.next.next
        return fin.next
    
    
    """
    Changes
    in while loop 
    curr and not curr.next
    trav and not trav.next
    """
