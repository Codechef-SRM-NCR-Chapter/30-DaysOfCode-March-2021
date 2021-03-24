def triplets(arr, a, b, c):
    
    count_triplets = 0
    l = len(arr)
    
    for i in range(l):
        
        for j in range(i + 1, l):
            
            if abs(arr[i] - arr[j]) <= a:
                
                for k in range(j + 1, l):
                    if abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c:
                        count_triplets += 1
    return count_triplets

arr = list(map(int, input("ARR: ").split()))
a = int(input("A: "))
b = int(input("B: "))
c = int(input("C: "))

print("Number of good triplets is/are: ",triplets(arr, a, b, c))
