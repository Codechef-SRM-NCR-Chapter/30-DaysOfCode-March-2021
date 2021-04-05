n=int(input(""))
x=int(input(""))
ctr=0
arr=list(map(int,input().split()))
for i in range(n):
        for j in range(i+1,n):
                for k in range(j+1,n):
                        if arr[i]+arr[j]+arr[k]<x:
                                print(arr[i],arr[j],arr[k])
                                ctr+=1
print(ctr)
