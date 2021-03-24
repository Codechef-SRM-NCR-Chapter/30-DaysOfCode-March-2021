try:
    arr= []
    print(" Enter the integer inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    unique=[]
    s=0
    for i in arr:
        if i  not in unique:
            unique.append(i)
            s=s+i
        else:
            unique.remove(i)
            s=s-i
    print("The unique elements are ",unique)
    print("The sum is : ",s)
