l=[1,2,2,1,2,1,2,1,1,1]
a=0
for j in range(1,5):
    for i in range (j):
        if a<10 and l[a]==1:
            print('*',end="")
        else:
            print('#',end="")
        a+=1
    print()
