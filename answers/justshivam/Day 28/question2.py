def swap(arr, index1, index2):
    arr[index1], arr[index2] = arr[index2], arr[index1]


def peak(arr, peaks):
    count = 0
    if peaks == 0:
        return True
    for i in range(1, len(arr)-1):
        if arr[i] > arr[i-1] and arr[i] > arr[i+1]:
            count += 1
    return count == peaks


def permutations(l, r, arr, peaks, res):
    if l == r:
        res.append(str(arr) if peak(arr, peaks) else '-1')
        return
    for i in range(l, r):
        swap(arr, l, i)
        permutations(l+1, r, arr, peaks, res)
        swap(arr, l, i)


num = int(input())
cases, res = [], []
for z in range(num):
    cases.append([int(x) for x in input().split()])
for z in range(num):
    arr = [x for x in range(1, cases[z][0]+1)]
    permutations(0, cases[z][0], arr, cases[z][1], res)
    found = False
    for j in res:
        if j != "-1":
            print(j)
            found = True
            break
    if not found:
        print("-1")
    res = []
