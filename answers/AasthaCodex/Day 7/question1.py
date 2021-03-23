class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        rep=[]
        for k in range(len(index)):
            rep=rep[:index[k]]+[nums[k]]+rep[index[k]:]
        return rep
