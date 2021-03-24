# Program to find the number of good triplets :)


def good_triplets(arr, a, b, c):
    count = 0       # Empty variable to store the final answer
    l = len(arr)        # length of array
    for i in range(l):
        for j in range(i + 1, l):
            if abs(arr[i] - arr[j]) <= a:       # Condition 1
                for k in range(j + 1, l):
                    if abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c:     # Condition 2 and 3
                        count += 1      # Found a good triplets
    return "Number of Good Triplets are :", count


arr = list(map(int, input("Enter the elements of the array *with space b/w the numbers* : ").split()))
a = int(input("Enter the value of a :"))
b = int(input("Enter the value of b :"))
c = int(input("Enter the value of c :"))

print(good_triplets(arr, a, b, c))
