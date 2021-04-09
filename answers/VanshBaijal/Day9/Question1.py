n=[int(x) for x in input("Enter the numbers with space: ").split()]
target = int(input("TARGET: " ))
for i in range(len(n)):
    for j in range(i+1,len(n)):
        if n[i] + n[j] == target and i!=j:
            print([i, j])
