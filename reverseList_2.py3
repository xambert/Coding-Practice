# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def helper(self, head, prev = None):
        if head is None:
            return prev
        next = head.next
        head.next = prev
        return self.helper(next, head)
    
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        return self.helper(head)
