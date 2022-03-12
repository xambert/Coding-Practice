
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        #case : Empty LL
        if head is None:
            return head
        
        slow = head
        fast = head.next
        
        #@pointers..fast slow..take care of next nodes
        while fast and fast.next and slow is not fast:
            slow = slow.next
            fast = fast.next.next
        
        #Start with the first s.t. slow.next points to head
        slow = ListNode()
        slow.next = head
        while fast and fast.next:
            if slow == fast:
                return True
            slow = slow.next
            fast = fast.next
        return False
