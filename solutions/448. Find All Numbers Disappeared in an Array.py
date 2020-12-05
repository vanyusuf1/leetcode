class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for n in nums:
            index = abs(n) - 1
            nums[index] = -abs(nums[index])
        
        return [i + 1 for i, n in enumerate(nums) if n > 0]
