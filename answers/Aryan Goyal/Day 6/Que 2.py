class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        s1=0
        l=len(arr)
        for i in range(l):
            for j in range(i,l,2):
                for k in range(i,j+1):
                    s1+=arr[k]
        return s1
