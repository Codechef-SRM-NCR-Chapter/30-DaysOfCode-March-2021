n=int(input(""))
arr=list(map(int,input().split()))
arr.sort()
for i in range(n):
  z=arr[i]
  x=arr.count(arr[i])
  if x>1:
          print(arr[i-2])
          y=arr[i]
          if z-1!=arr[i-1]:
             q=min(arr[i-2]+1,y)
  else:
    pass
print(y,q)
