def setBitCount(num):
    count = 0
    while (num):
        if (num & 1):
            count += 1
             
        num = num >> 1   
    return count

def helper(arr):
    count = []
    for i in range(len(arr)):
        count.append([(-1) * setBitCount(arr[i]), arr[i]])
         
    count.sort(key = lambda x:x[0])
    for i in range(len(count)):
        print(count[i][1],end=" ")
    print("\n")
    

arr = list(map(int, input().split()))
helper(arr)



# n = int(input())
# m = "{0:b}".format(n)
# x = int(m)
# print(m)
# print(type(m))
# print(x)
# print(type(x))
# 5 2 3 9 4 6 7 15 32
