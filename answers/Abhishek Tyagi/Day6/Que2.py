class Solution:
    def sumOddLengthSubarrays(self,arr:list[int])->int:
        N = len(arr)

        total=0
        for k in range(1,N+1,2):
            for t in range (N-k):
                total +=sum(arr[t:k])
            return total
