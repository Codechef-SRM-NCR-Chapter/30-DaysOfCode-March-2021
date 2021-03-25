arr = list(map(int, input().split()))
target = int(input())
dict = {}
length = len(arr)
for i in range(0, length):
    dict[arr[i]]=i

lst = []
for i in range(0,length):
    curr_value = arr[i]
    if curr_value in dict:
        to_find = target - curr_value
        if to_find in dict:
            temp = []
            temp.append(dict[curr_value])
            temp.append(dict[to_find])
            lst.append(temp)
            del dict[curr_value]
            del dict[to_find]
print(lst)
