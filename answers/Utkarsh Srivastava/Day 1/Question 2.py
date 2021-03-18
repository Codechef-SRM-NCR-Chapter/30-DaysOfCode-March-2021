k = 10 
for i in range (6):
    for j in range(k):
        print(end=" ")
    k -= 2
    for j in range (i):
        print('* ',end="")
    print()
