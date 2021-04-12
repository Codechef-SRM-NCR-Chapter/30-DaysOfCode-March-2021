def countStrings(string, start=0, end=-1):
    current = 0
    if end == -1:
        end = len(string)
    if(start == end-1):
        res.append(string)
    else:
        for current in range(start, end):
            str_list = list(string)
            temp = str_list[start]
            str_list[start] = str_list[current]
            str_list[current] = temp
            countStrings("".join(str_list), start+1, end)
            temp = str_list[start]
            str_list[start] = str_list[current]
            str_list[current] = temp


res = []
countStrings(input())
print(len(res))
for i in res:
    print(i)
