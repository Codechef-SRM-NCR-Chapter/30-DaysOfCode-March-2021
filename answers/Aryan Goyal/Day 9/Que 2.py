class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        index, sm, rng = 1, nums[0], nums[0]
        while index < len(nums):
            rng = max(rng + nums[index], nums[index])
            sm = max(sm, rng)
            if rng < 0:
                rng = 0
            index += 1
        return sm
