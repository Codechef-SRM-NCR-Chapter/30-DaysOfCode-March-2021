def Oddlengthsum(arr):
    sum = 0
    l = int(len(arr))
    for i in range(0,l):
        for j in range(i,l,2):
            for k in range(i,j+1):
                sum+=int(arr[k])
    return sum
arr = input("Enter any number of positive integers: ").split()
print(Oddlengthsum(arr))
