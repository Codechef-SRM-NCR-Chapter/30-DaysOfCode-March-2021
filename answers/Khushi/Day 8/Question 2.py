def arrayPairSum(arr):
  n=len(arr)
  arr.sort()
  sum=0
  for i in range(0,n,2):
      sum+=arr[i]
  print("Output:",end=" ")
  print(sum)
arrayPairSum([1,4,3,2])
