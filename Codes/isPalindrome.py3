def isPalindrome(self, head: Optional[ListNode]) -> bool:
        slow = head
        prev = None
        if head is None:
            return None
        fast = head
        while fast and fast.next:
            fast = fast.next.next
            temp = slow.next
            slow.next = prev
            prev = slow
            slow = temp
            
        if fast is not None:
            slow = slow.next
        
        #print(slow, prev, head)
        while slow and prev:
            if slow.val!= prev.val:
                return False
            slow = slow.next
            prev = prev.next
        return True
            
            
