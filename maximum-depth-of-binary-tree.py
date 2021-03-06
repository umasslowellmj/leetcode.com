#https://leetcode.com/problems/maximum-depth-of-binary-tree/?tab=Description
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        if root:
            return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
        else:
            return 0
            
            # return 1 + max(map(self.maxDepth, (root.left, root.right))) if root else 0
