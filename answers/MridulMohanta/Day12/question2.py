t = int(input(""))
ans = {}
num = 0
for i in range(0 , t):
    count = 0
    nol = int(input(""))
    new = input("")
    new = str(new)
    for j in range(0 , nol):
        if new[j] == "1":
            for k in range(j , nol):
                if new[k] == "1":
                    count = count + 1 
                   
    ans[num] = count
    num = num + 1
for x in ans.values():
    print(x)
