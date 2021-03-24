# Naive approact O(N^3)

arr = list(map(int, input().split()))
a = int(input())
b = int(input())
c = int(input())
output = []
length = len(arr)
for i in range(0,length-2):
    for j in range(i+1,length-1):
        for k in range(j+1,length):
            if((abs(arr[i]-arr[j])<=a)and(abs(arr[j]-arr[k])<=b)and(abs(arr[k]-arr[i])<=c)):
                temp = []
                temp.append(arr[i])
                temp.append(arr[j])
                temp.append(arr[k])
                output.append(temp)

print(output)

