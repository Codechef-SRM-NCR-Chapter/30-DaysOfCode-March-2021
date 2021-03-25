o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
target = int(input('Enter the target value: '))
for i in range(len(o)):
    for j in range(i+1,len(o)):
        if o[i] + o[j] == target and i!=j:
            print([i, j])
