o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
for i in range(len(o)):
    if o[i]==1:
        print("Transition point at",i)
        break
