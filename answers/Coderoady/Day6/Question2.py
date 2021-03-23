try:
    arr=[]
    print("Enter the positive integer inputs and type 'stop' when you are done\n")
    while True:
        arr.append(int(input()))

except:
    l=len(arr)
    t=0
    c=0
    s=0
    sub=1
    while sub<=1:
        for i in range(0,sub):
            s=s+arr[t]
            t+=1
        c+=1
        if(t==(1)):
            sub+=2
            t=0
            c=0
        else:
            t=c
    print(s)
