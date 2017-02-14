# https://leetcode.com/problems/ransom-note/

class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        if len(ransomNote) == 0:
            return True
        for i in range(len(ransomNote)):
            
            if ransomNote.count(ransomNote[i])>magazine.count(ransomNote[i]):
                return False
        return True
