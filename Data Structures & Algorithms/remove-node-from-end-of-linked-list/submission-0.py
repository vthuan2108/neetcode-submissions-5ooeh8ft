# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# xóa phần tử thứ n từ cuối
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        cur =head
        nodes=[]
        while cur:
            nodes.append(cur)
            cur=cur.next
        delindex=len(nodes)-n
        if delindex==0:
            return head.next
        nodes[delindex-1].next=nodes[delindex].next
        return head
        