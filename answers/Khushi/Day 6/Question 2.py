# For the output shown in example enter the required array as shown [1,4,2,5,3]
def OddLengthSum(arr):
    sum=0
    l=len(arr)
    for i in range(l):
        for j in range(i,l,2):
            for k in range(i,j+1,1):
                sum+=arr[k]

    return sum
print("Enter the array of 5 elements: ")
arr = []
for x in range(5):
    element=int(input())
    arr.append(element)
print("Sum of possible odd length sub-arrays:")
print(OddLengthSum(arr))