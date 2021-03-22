arr = [int(x) for x in input('Enter numbers seprated by space: ').split()]
i=0
n=1
s=0
while(i<=len(arr) and n<len(arr)+1):
    s+=sum(arr[i:i+n])
    i+=1
    if(i+n==len(arr)+1):
        n+=2
        i=0
print("Sum of all odd sub array is",s)
