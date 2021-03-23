Nums=[int(x) for x in input('Enter numbers seprated by space: ').split()]
Index=[int(x) for x in input('Enter Index seprated by space: ').split()]
R=[]
i=0
while(i<=len(Nums)-1):
    R.insert(Index[i], Nums[i])
    i+=1
print(R)
