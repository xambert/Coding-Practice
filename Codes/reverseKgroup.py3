def reverseonce(self, head,l,k):
        if head is None:
            return head
        curr,prev,next = head, None, None
        ct = k
        if l>= k:
            while curr is not None and ct >=1:
                next = curr.next
                curr.next = prev
                prev = curr
                curr = next
                ct -= 1
            l -= k
        
        if l<k or l==0:
            head.next = next
        else:
            head.next = self.reverseonce(next, l, k)
        return prev
        
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head is None:
            return head
        length = head
        l = 1
        while length.next is not None:
            length = length.next
            l += 1
        return self.reverseonce(head,l,k)
