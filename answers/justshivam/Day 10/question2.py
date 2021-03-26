string = input('Enter the string: ')
buffer = ''
count = 0
for i in string:
    if i.isupper():
        if count != 0:
            print(buffer)
        buffer = ''
        count += 1
    buffer += i
print(buffer)
print(count)
