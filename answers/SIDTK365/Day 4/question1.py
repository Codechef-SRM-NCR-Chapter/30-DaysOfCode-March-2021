n = int(input())
factors = []

while n % 2 == 0:
    factors.append(2)
    n //= 2

temp = 3
while n != 1 and temp <= n:
    if n % temp == 0:
        factors.append(temp)
        n//=temp
    else:
        temp+=2 
        # Since if we encounter any composite odd numbers i,e, temp = 9 their factors have already been tested
        # and the number won't be divisibe by that (n%9!=0) as 3 is already tested for

for i in range(len(factors)):
    print(factors[i],end=" ")
