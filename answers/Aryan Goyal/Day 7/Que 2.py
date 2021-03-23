class Solution:
    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
        s1=0
        x=len(arr)
        for i in range(x-2):
            for j in range(i+1,x-1):
                if abs(arr[i]-arr[j])<=a:
                    for k in range(j+1,x):
                        if abs(arr[j]-arr[k])<=b and abs(arr[i]-arr[k])<=c:
                            s1+=1
        return s1
