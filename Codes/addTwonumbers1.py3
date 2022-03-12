
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0
        head = ListNode(0)
        ans = head
        s = 0
        while  l1 is not None or l2 is not None or carry:
            s = 0
            if l1 is not None:
                s += l1.val
                l1 = l1.next
            if l2 is not None:
                s += l2.val
                l2 = l2.next
            s += carry
            carry = s//10
            temp = ListNode(s%10)
            head.next = temp
            head = temp
        return ans.next
