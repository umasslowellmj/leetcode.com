#https://leetcode.com/problems/merge-two-sorted-lists/?tab=Description

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        ret = ListNode
        next = ret
        if l1==None:
            return l2
        elif l2==None:
            return l1
        else:
            return None
        while l1 or l2:
            next.val = max(l1.val, l2.val)
            if l1.val<l2.val:
                l1 = l1.next
            else:
                l2 = l2.next
            next = next.next
        return ret.next
