num = int(input('Enter number of terms: '))

last = 0
result = 0
for i in range(num):
    last *= 10
    last += i+1
    result += last

print(result)