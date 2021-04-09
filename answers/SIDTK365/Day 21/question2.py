n = int(input())
lst = input().split()
lst.sort()
num1 = ""
num2 = ""
for i in range(0,n):
    if(i%2==0):
        num1+=lst[i]
    else:
        num2+=lst[i]
print(int(num1)+int(num2))
# 6 8 4 5 2 3
