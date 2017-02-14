#https://leetcode.com/problems/product-of-array-except-self/

class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l = len(nums)
        base = 1
        output = []
        for i in range(0,l):
            output.append(base)
            base = base*nums[i]
            
        base = 1
        
        for i in range(l-1, -1, -1):
            
            
            output[i] = output[i]*base
            base = base*nums[i]
        return output
            
