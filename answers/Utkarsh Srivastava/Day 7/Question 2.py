import numpy as np
arr = input("Enter array elements seperated by space ").split())
ans = []
s = 0
a = int(input("Enter A "))
b = int(input("Enter B "))
c = int(input("Enter C "))
arr = arr.astype(int)
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        for k in range(j+1,len(arr)):
            if(abs(arr[i]-arr[j])<=a):
                if(abs(arr[j]-arr[k])<=b):
                    if(abs(arr[i]-arr[k])<=c):
                        ans.append([arr[i],arr[j],arr[k]])
                        s += 1
print("Total number of good triplates are ",s)
print("Good triplates are ",ans)
