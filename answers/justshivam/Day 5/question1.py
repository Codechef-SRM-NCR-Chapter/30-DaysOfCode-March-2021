num = int(input('Enter number of temrs: '))
result = [0, 1]
if num == 1:
    result = [0]
elif num == 0:
    result == []
for i in range(num - 2):
    result.append(result[-1] + result[-2])

print(result)
