arr = list(map(int, input("Nums(Kindly, use space after each number) = ").split()))

s=0
sum = []
l=len(arr)

for i in range(l):
        if arr[i] + s <= 0:
            s=0
            sum.append(s)
            
        if arr[i] + s > 0:
            s=s+arr[i]
            sum.append(s)

print("Maximum Contiguous Array Sum is",max(sum))
