num = [int(x) for x in input("Enter the Numbers : ").split()]
index=[int(x) for x in input("Enter the Index : ").split()]
target=[]
for i in range(len(num)):
    target.insert(index[i], num[i])
print("The Target array is :",target)
