# Program to find the unique quadruples from the given array that sum up to a given number :)

def quadruples(arr, n, target):
    print("unique quadruples are :", end='')
    for i in range(0, n - 3):
        for j in range(i + 1, n - 2):
            for k in range(j + 1, n - 1):
                for l in range(k + 1, n):
                    if arr[i] + arr[j] + arr[k] + arr[l] == target:
                        print(arr[i], arr[j], arr[k], arr[l], end=' $')


arr = list(map(int, input("Enter the elements of array *With spaces b/w number* :").split()))
length = len(arr)
target = int(input("Enter the target number :"))
quadruples(arr, length, target)
