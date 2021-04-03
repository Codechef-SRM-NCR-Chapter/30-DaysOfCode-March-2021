try:
    arr= []
    print(" Enter the binary inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l= len(arr)
    t=l//2
    def check(i):
        if i<l and i>=0:
            if arr[i]!=1:
                return check(i-1)
            else:
                arr[i]=0
                return 1+check(i-1)+check(i+1)
        else:
            return 0


print(check(t))
