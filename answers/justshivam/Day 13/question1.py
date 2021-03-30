def sum(num):
    if num == 0:
        return 0
    else:
        return (num % 10) + sum(num//10)


num = int(input())
print(sum(num))
