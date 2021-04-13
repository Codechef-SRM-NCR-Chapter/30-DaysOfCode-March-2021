l, arr, moves = int(input()), [int(x) for x in input().split()], 0
for i in range(1, l):
    while arr[i] < arr[i-1]:
        arr[i] += 1
        moves += 1
print(moves)
