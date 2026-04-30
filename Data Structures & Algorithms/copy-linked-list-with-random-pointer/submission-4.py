"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if head==None:
            return None
        oldtoCopy={}
        # tạo clone các node, chưa nối
        cur =head
        while cur:
            copy=Node(cur.val)
            oldtoCopy[cur]=copy
            cur=cur.next
        #nối next và random
        cur=head
        while cur:
            oldtoCopy[cur].next= oldtoCopy.get(cur.next)
            oldtoCopy[cur].random=oldtoCopy.get(cur.random) 
            cur=cur.next
        return oldtoCopy[head]