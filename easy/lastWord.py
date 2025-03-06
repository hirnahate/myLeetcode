class Solution(object):
    def lengthOfLastWord(self, s):
        n = len(s) - 1

        while s[n] == ' ':
            n -= 1

        count = n
        while count >= 0 and s[count] != " ":
            count -= 1
            

        return n - count
