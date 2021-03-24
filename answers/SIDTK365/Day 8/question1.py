arr = list(map(int, input().split()))
dict = {}
length = len(arr)
for i in range(0, length):
    if not arr[i] in dict:
        dict[arr[i]] = 1
    else:
        dict[arr[i]] += 1

sum = 0
for key in dict:
    if(dict[key] == 1):
        sum += key
print(sum)
