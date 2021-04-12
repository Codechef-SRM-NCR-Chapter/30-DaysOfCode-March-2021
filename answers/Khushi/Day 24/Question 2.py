def countMinOperations(k,n):
    r=0
    while (True):
        countZero=0
        i=0
        while(i<n):
            if((k[i] & 1)>0):
                break
            elif(k[i]==0):
                countZero+=1
            i+=1
        if(countZero==n):
            return r
        if(i==n):
            for j in range(n):
                k[j]=k[j]//2
            r+=1
        for j in range(i,n):
            if(k[j] & 1):
                k[j]-=1
                r+=1

n=int(input("Enter no. of elements in array: "))
a=[]
print("Enter elements of array:")
for x in range(n):
    elem=int(input())
    a.append(elem)
print("Minimum number of steps required to get the zero array is:",end=" ")
print(countMinOperations(a,n))
