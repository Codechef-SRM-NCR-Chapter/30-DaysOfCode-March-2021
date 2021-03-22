l=input().lstrip('[').rstrip(']')
arr=l.split(",")
length=len(arr)
def sub():
    global s
    s=0
    for j in range(1,length,2):
        for i in range(length):
            if j==1:
                s+=int(arr[i])
            for k in range (0,j):
                if i+k<=length and i+j<= length :
                    s+=int(arr[i+k])
                else:
                    continue
    print(s)
sub()

