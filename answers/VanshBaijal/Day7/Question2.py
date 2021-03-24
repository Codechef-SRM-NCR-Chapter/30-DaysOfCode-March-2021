arr = list(map(int, input("Enter the numbers with space: ").split()))
a = int(input("A: "))
b = int(input("B: "))
c = int(input("C: "))
output = [ ]
length = len(arr)
for i in range(0,length-2):
    for j in range(i+1,length-1):
        for k in range(j+1,length):
            if((abs(arr[i]-arr[j])<=a)and(abs(arr[j]-arr[k])<=b)and(abs(arr[k]-arr[i])<=c)):
                temp = [ ]
                temp.append(arr[i])
                temp.append(arr[j])
                temp.append(arr[k])
                output.append(temp)
print("OUTPUT: ",output)
