print("Input: ",end="")
n = int(input("N: "))

count = 0

for i in range(1,n):
    if i*i < n:
        count+=1

print("Output:",count)
