rows = 4
i = 1
while i <= rows:
    j = i
    while j < rows:
        print(' ', end=' ')
        j += 1
    k = 1
    while k <= i:
        print('*', end=' ')
        k += 1
    print()
    i += 1
