Nums=[int(x) for x in input('Enter numbers seprated by space: ').split()]
Index=[int(x) for x in input('Enter Index seprated by space: ').split()]
R=[]
for i in range(len(Nums)):
    R.insert(Index[i], Nums[i])
print(R)
