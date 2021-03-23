class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        l=[]
        for i in range(len(index)):
            l.insert(index[i],nums[i])
        return l
