try:
    arr= []
    print(" Enter the integer inputs and type 'stop' when you are done\n" )
    #user should enter even number of inputs
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    target= int(input(" Enter the target integer\n"))
    l=len(arr)
    for i in range(0,l-1):
        for j in range(i+1,l):
            if (arr[i]+arr[j])==target:
                print(i,",",j)
