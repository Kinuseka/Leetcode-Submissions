class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #x + y = target 
        #x = target - y
        seen = {}
        for i, each in enumerate(nums):
            diff = target - each
            if diff in seen:
                return [seen[diff], i]
            else:
                seen[each] = i

