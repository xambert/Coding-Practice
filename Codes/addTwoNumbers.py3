def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0
        head,head1 = l1,l1
        f1 = 0
        f2 = 0
        while l1 and l2:
            l1.val = ((l1.val if f1==0 else 0) + (l2.val if f2==0 else 0) + carry)
            carry = l1.val//10
            l1.val %= 10
            if f1==0 and l1.next is None and l2.next is not None:
                l1.next = l2.next
                f1 = 1
            elif f2 ==0 and l2.next is None and l1.next is not None:
                l2.next = l1.next
                f2 = 1
            l1 = l1.next
            l2 = l2.next
        if carry:
            temp = ListNode(carry)
            while head1.next is not None:
                head1 = head1.next
            head1.next = temp
            head1 = temp
        return head
