a=int(input("Enter no. of test cases:"))
for x in range(a):
  n,m=map(int,input("Enter length of arr and req. no. of peaks: ").split())
  if(m>(n-1)//2):
    print(-1)
  else:
    l=[0]*n
    for i in range(m):
      l[2*i+1]=n-i
    count=1
    for i in range(n):
      if(l[i]==0):
        l[i]=count
        count+=1
    print(" ".join(str(i) for i in l))
