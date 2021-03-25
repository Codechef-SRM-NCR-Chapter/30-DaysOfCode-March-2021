class Solution(object):
   def arrayPairSum(self, a):
      """
      :type nums: List[int]
      :rtype: int
      """
      n = len(a)
      a.sort()
      ans = 0
      for i in range(0,n,2):
         ans += a[i]
      return ans
ob1 = Solution()
print(ob1.arrayPairSum([1,4,3,2]))
