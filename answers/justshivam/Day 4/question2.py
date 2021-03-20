current = 0
level = 1
for i in range(1, 11):
    print(f'{i} ', end='')
    current += 1
    if current == level:
        current = 0
        level += 1
        print('')