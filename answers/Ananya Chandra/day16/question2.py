try:
    arr= []
    print(" Enter the binary inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l=len(arr)
    t = l // 2
    while t>=0 and t<l:
        if arr[t]==1:
            if arr[t-1]==0:
                print(t)
                break
            else:
                t=t-1
        else:
            t=t+1

