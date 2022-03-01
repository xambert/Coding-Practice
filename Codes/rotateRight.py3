# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        n = 1
        temp = head
        
        if not head:
            return head
        
        while temp.next:
            n += 1
            temp = temp.next
        
        temp.next = head
        
        k = n - k%n
        
        for i in range(k):
            temp = temp.next
        
        ans = temp.next
        temp.next = None
        return ans
                
        
