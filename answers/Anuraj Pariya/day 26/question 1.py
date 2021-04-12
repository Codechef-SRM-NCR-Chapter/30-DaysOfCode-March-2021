inp = int(input("Enter the number of test cases: "))
n = []
k = []
count = 0
ans = []
flag = 1
for i in range(0 , inp):
    m = input("Enter the range: ")
    a , b = m.split()
    n.append(a)
    k.append(b)
    n = [int(j) for j in n]
    k = [int(j) for j in k] 

for i in range(0 , inp):
    for j in range(n[i] , k[i] + 1):
        flag = 1
        for p in range(2 , j):
            if j % p == 0:
                flag = 0
        if flag:    
            count = count + 1              
    ans.append(count * ((k[i] - n[i] + 1) - count))
    count = 0
for i in ans:
    print(i)
