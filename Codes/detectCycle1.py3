def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        if head.next is None:
            return None
        vis = set()
        h1 = head
        while h1 is not None:
            if h1 not in vis:
                vis.add(h1)
                h1 = h1.next
            else:
                return h1
        return None
