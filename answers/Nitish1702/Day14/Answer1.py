n=input()
k=''
def func(i):
    global k
    if i<len(n):
        if n[i] not in k:
            k+=n[i]
        func(i+1)
func(0)
print(k)

