# Program to find the total count of sub-arrays having their sum equal to 0 :)


# Finding all sub array of the array
def subarray(arr):
    sub_array = [[]]
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            sub = arr[i:j]
            sub_array.append(sub)
            sub_array = list(filter(None, sub_array))
    return sub_array


target = int(input("Enter the target number :"))
arr = list(map(int, input("Enter the elements of array *With spaces b/w number* :").split()))
count = 0
# Counting the number of subarray whose sum is zero
for i in subarray(arr):
    if sum(i) == target:
        count += 1
print(count)
