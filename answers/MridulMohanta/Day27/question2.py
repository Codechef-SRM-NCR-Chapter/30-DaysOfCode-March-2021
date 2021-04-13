inp = input("Enter the pattern: ")
n = int(input("Enter length og pattern: "))
count = 0
s = (n % len(inp))

for i in range(0 , len(inp)):
    if inp[i] == "a":
        count = count + 1

count = (count * int(n / len(inp)))

for i in range(0 , s):
    if inp[i] == "a":
        count = count + 1 

print(count)   
