class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp = {}
        for i, num in enumerate(nums):
            if target - num in mp:
                return [mp[target - num] + 1, i + 1]
            else:
                mp[num] = i