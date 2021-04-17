props, arr = [int(x) for x in input().split()], []
for i in range(props[1]):
    arr.append(input().split())
string = input().split()
for i in arr:
    if len(i[0]) > len(i[1]):
        for j in range(props[0]):
            if string[j] == i[0]:
                string[j] = i[1]
print(" ".join(string))
