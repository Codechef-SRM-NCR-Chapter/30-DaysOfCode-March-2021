n = input("Enter numbers: ")
s = n.split()
s = [int(i) for i in s]
flag = 1
count = 0

while(flag != 0):
    for i in range(0 , len(s)):
        if s[i] % 2 != 0:
            s[i] = s[i] - 1
            count = count + 1
    flag = 1
    no = 1
    for k in range(0 , len(s)):
        if s[k] != 0:
            no = 0
    if no == 1:
        flag=0
        break
    for j in range(0 , len(s)):
        s[j] = s[j] / 2
    count = count + 1
    flag = 1
    no = 1
    for k in range(0 , len(s)):
        if s[k] != 0:
            no = 0
            break
    if no == 1:
        flag=0

print(count)
