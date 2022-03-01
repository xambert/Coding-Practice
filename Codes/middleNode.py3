    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        while curr and curr.next:
            head = head.next
            curr = curr.next.next
        return head
