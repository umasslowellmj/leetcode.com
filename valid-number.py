# https://leetcode.com/problems/valid-number/

class Solution(object):
    def isNumber(self, s):
        """
        :type s: str
        :rtype: bool
        """
      

        # s = str(s.strip())
        # if float(s):
        #     return True
        # else:
        #     return s.isdigit()
                
        try:
            float(s)
            return True
        except ValueError:
            pass
     
        try:
            import unicodedata
            unicodedata.numeric(s)
            return True
        except (TypeError, ValueError):
            pass
     
        return False
