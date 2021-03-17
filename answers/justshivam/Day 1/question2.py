
n = int(input('Enter number of levels: '))

for i in range(1, n + 1):
    string = "\t" * (n - i)
    for j in range(i):
        string += '*\t'
    print(string)
