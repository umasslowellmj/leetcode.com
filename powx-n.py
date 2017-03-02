#https://leetcode.com/problems/powx-n/?tab=Description

class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        ret = 1
        if x==0 or n==0:
            return 1
        else:
            for i in range(n):
               ret = ret*x
        return ret
