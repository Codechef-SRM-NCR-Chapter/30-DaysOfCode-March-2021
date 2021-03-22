# Entering the list input in one line
lst = list(map(int, input().split()))
extra_candies = int(input())
max_element = max(lst)

lst_ans = []
for i in range(len(lst)):
    if (lst[i]+extra_candies) >= max_element:
        lst_ans.append(True)
    else:
        lst_ans.append(False)

print(lst_ans)
