def checkPalindorme(string, start, end):
    string = string[start-1:end]
    l = len(string)
    for i in range(l):
        j = -1-i
        if not string[i] == string[-1-i]:
            res.append('NO')
            return
        elif abs(j) - 1 == i:
            res.append('YES')
            return


def swap(st, index):
    st = [i for i in string]
    st[index-1] = 'X'
    globals()['string'] = ''.join(st)


arr = input('Enter first line: ').split()
l = int(arr[0])
n = int(arr[1])
string = input('Enter the string: ')
res = []
for i in range(n):
    op = input().split()
    if int(op[0]) == 2:
        checkPalindorme(string, int(op[1]),  int(op[2]))
    elif int(op[0]) == 1:
        swap(string, int(op[1]))

for i in res:
    print(i)
