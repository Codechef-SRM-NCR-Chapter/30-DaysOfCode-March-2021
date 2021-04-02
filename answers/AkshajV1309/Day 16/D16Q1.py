o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
for i in range(len(o)):
    if o[i]==0:
        print("No. of 1s=",i)
        break
