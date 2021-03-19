k = 8 
for i in range (5):
    for j in range(k):
        print(end=" ")
    k -= 2
    for j in range (i):
        print('* ',end="")
    print()
