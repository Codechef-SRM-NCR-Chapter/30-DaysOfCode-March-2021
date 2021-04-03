try:
    arr= []
    print(" Enter the binary inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l=len(arr)
    def check(m,n,t):
        if(n>m):
            mid=(m+n)//2
            if arr[mid] == 0:

                return check(mid+1,n,t)
            else:
                return check(m,mid,mid)
        else:
            return t

    print(check(0,l,0))
