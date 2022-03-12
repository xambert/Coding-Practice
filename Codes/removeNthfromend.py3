
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        slow = head
        l = 1
        while slow.next is not None:
            slow = slow.next
            l += 1
        l -= n    
        
        slow = ListNode()
        ans = slow
        slow.next = head
        
        while l>0:
            slow = slow.next
            l -= 1
            
        if slow.next is not None and slow.next.next is not None:
            slow.next = slow.next.next
        else:
            slow.next = None
        return ans.next
