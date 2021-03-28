def calculate(string):
    count = 0
    for i in string:
        if i == '1':
            count += 1
    count += (count*(count-1))//2
    return count


loops = int(input())
res = []
for i in range(loops):
    x = input()
    res.append(calculate(input()))
for i in res:
    print(i)
