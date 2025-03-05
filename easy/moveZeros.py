class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        count = 0

        for i in nums:
            if i == 0:
                count += 1
                nums.remove(i)
                nums.append(0)
        

        return nums
