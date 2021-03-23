# Program to return the target array in a given order :)


nums = list(map(int, input("Enter the elements of the list *with space b/w the numbers* : ").split()))

index = list(map(int, input("Enter the array of index *with space b/w the numbers* : ").split()))

sol = []        # Creating empty list to store required solution

for i in range(len(index)):
    sol.insert(index[i], nums[i])        # Insert help us add element in the existing list at given index
print("The required target array is : ", sol)