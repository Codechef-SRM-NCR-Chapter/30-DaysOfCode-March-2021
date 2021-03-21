current = 0
level = 1
for i in range(1, 11):
    sym = '#' if (i==2 or i==3 or i==5 or i==7) else '*'
    print(f'{sym} ', end='')
    current += 1
    if current == level:
        current = 0
        level += 1
        print('')