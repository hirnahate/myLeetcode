class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """

        num = 0
        for i in digits:
            if digits == 0:
                break
            else:
                num += i
                num *= 10
        num = num / 10
        num += 1

        arr = [int(i) for i in str(num)]
        return arr
        


        
