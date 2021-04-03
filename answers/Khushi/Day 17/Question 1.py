def foursum(arr,k):
    n=len(arr)
    allSumpairs={}
    quadraplets=[]
    arr.sort()
    for i in range(len(arr)-3):
        for j in range(i+1,len(arr)-2):
            sum=k-(arr[i]+arr[j])
            low=j+1
            high=len(arr)-1
            while (low<high):
                if (arr[low]+arr[high]<sum):
                    low+=1
                elif (arr[low]+arr[high]>sum):
                    high-=1
                else:
                    quadraplets.append((arr[i],arr[j],arr[low],arr[high]))
                    (low,high)=(low+1,high-1)
    ans=list(set(quadraplets))
    for i in range(len(ans)):
        ans[i]=list(ans[i])
        ans[i].sort()
    ans=sorted(ans,key=lambda x:(x[0],x[1],x[2],x[3]))
    return ans

if(__name__=='__main__'):
    t=int(input("Enter no of entries to check the sum:"))
    print("Enter n and k:",end="")
    while t:
        t-=1
        n,k=map(int,input().split())
        a=list(map(int,input().strip().split()))[:n]
        ans=foursum(a,k)
        print("Output:")
        for v in ans:
            for u in v:
                print(u,end=" ")
            print("$",end=" ")
        if(len(ans)==0):
            print(-1,end=" ")
        print()
