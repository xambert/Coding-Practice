# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        #method-1 :  Iteration
        prev, curr, temp = None, head, None
        while curr is not None:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
        if curr is None:
            head = prev
        return head
