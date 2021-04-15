l,r,q = map(int,input().split())
array = list(map(int,input().split()))
while r > 0:
    array.insert(0,array[-1])
    array.pop()
    r-=1
while q > 0:
    temp = int(input())
    print(array[temp])
    q-=1
