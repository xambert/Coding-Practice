
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        if head.next is None:
            return None
        
        slow = head
        fast = head.next
        
        while True:
            if slow is fast:
                break
            slow = slow.next
            if fast is None or (fast is not None and fast.next is None):
                return None
            else:
                fast = fast.next.next
        slow = ListNode()
        slow.next = head
      
        while True:
            slow = slow.next
            temp = fast.next
            if temp == slow:
                slow.next = None
                return slow
            while temp is not fast:
                if temp == slow:
                    slow.next = None
                    return slow
                temp = temp.next
            fast = fast.next
