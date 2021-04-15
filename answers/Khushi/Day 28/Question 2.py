t=int(input("Enter no. of test cases:"))
for x in range(t):
  n,k=map(int,input("Enter length of array and req. no. of peaks: ").split())
  if(k>(n-1)//2):
    print(-1)
  else:
    l=[0]*n
    for i in range(k):
      l[2*i+1]=n-i
    count=1
    for i in range(n):
      if(l[i]==0):
        l[i]=count
        count+=1
    print(" ".join(str(i) for i in l))