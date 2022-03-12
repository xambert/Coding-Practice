
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        """
        head1 = headA
        head2 = headB
        while head2 is not None:
            head1 = headA
            while head1 is not None and head1 != head2:
                head1 = head1.next
            f = True
            f2 =False
            ans = head1
            temp = head2
            while head1 and temp:
                f2 = True
                f = f and (head1 == temp)
                head1= head1.next
                temp = temp.next
            if f and f2:
                return ans
            head2 = head2.next
        return None
        """
        if headA is None or headB is None:
            return None
        h1, h2 = headA, headB
        while h1 is not h2:
            h1 = headB if h1 is None else h1.next
            h2 = headA if h2 is None else h2.next
        return h1
