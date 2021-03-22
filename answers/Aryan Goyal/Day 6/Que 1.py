class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int):
        l=[]
        for i in candies:
            i+extraCandies
            if i+extraCandies>=max(candies):
                l.append(True)
            if i+extraCandies<max(candies):
                l.append(False)
        return l
