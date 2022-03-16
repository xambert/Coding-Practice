def flatten(root):
    #Your code here
    if root is None or root.next is None:
        return root
    curr, nxt = root, None
    while curr and curr.next:
        slow = curr
        fast = curr.next
        nxt = curr.next.next
        merge = Node(0)
        keep = merge
        while slow and fast:
            if slow.data <= fast.data:
                merge.bottom = slow
                slow = slow.bottom
            else:
                merge.bottom = fast
                fast = fast.bottom
            merge = merge.bottom
        merge.bottom = slow or fast
        curr = keep.bottom
        curr.next = nxt
    return curr
