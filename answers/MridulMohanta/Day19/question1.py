inp = int(input("Enter N: "))
m = []
for i in range(0 , inp):
    n = int(input("Enter numbers: "))
    m.append(n)
m.sort()    
mis = 0
rep = 0
flg = 0

for i in range(1 , inp + 1):
    flg = 0
    for j in range(0 , len(m)):
        if i == m[j]:
            flg = 1
            break
    if flg == 0:
        mis = i
        break 
    
for i in range(0 , len(m)):
    for j in range(i+1 , len(m)):
        if m[i] == m[j]:
            rep = m[i]
            break

print(rep ," ", mis)
