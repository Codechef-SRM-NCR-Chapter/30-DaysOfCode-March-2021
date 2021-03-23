#day 6
#question2
def OddSum(arr):
    sum=0
    l=len(arr)
    for i in range(l):
        for j in range(i,l,2):
            for k in range(i,j+1,1):
                sum+=arr[k]
    return sum
print("Enter the array ")
list1= []
for x in range(5):
    element=int(input())
    list1.append(element)
print("Sum of possible odd length sub-arrays:")
print(OddLengthSum(list1))
