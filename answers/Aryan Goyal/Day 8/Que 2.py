class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        l=[]
        s1=0
        nums.sort()
        for i in range(0,len(nums),2):
            s1+=nums[i]
        return s1
