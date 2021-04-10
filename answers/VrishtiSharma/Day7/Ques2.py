arr = input("Enter the numbers: ").split()
a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
c = int(input("Enter value of c: "))
l = len(arr)
s = []
for i in range(0,l):
    for j in range(0,l):
        if i==j:
            continue
        for k in range(0,l):
            if (i==k or j==k) or not(i<j<k):
                continue
            if abs(int(arr[i])-int(arr[j])) <= a:
                if abs(int(arr[j]) - int(arr[k])) <= b:
                    if abs(int(arr[i]) - int(arr[k])) <= c:
                        s.append((int(arr[i]), int(arr[j]), int(arr[k])))
print(len(s))
