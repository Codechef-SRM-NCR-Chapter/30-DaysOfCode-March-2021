str = input("Enter String: ")
n = int(input("Enter number of patterns: "))

count = 0
m={}

for i in range(n):
    m[i]=input()

for j in m:
    for k in range(0, len(str) - len(m[j]) + 1):
        s_str = str[k:(k+len(m[j]))]
        if(m[j] == s_str):
            count+=1 
    print(count)
    count=0
