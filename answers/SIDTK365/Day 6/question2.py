# Entering the list input in one line
lst = list(map(int, input().split()))
ans = 0
length = len(lst)
for i in range(len(lst)):
    ans += ((((i + 1) * (length - i) + 1) // 2) * lst[i])
    # Since we have i+1 choices on the left from lst[0] to lst[i]
    # and we have length-i choices on the right lst[i] to lst[length-1]
    # so we have total (i+1) * (length-i) choices that contain lst[i]
    # since half are even length subarrays rest are odd length subarray
    # Therefore freq{lst[i]} = ((i+1)*(length-i)+1)/2 (Odd frequencies)
print(ans)
