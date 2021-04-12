print("Input: ")
l = int(input("size of array: "))
arr = input("Enter array: ").split()

count = 0
arr[0] = int(arr[0])

for i in range(1,l):
    arr[i] = int(arr[i])
    
    while arr[i] < arr[i-1]:
        count+=1
        arr[i]+=1
        
print("\nOutput:",count)
