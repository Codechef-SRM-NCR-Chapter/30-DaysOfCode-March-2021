try:
    nums= []
    print(" enter the integer inputs and type 'stop' when you are done\n" )
    while True:
        nums.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l = len(nums)
    print(" enter the index array \n")
    index=[]
    target=[]
    for i in range(l):
        index.append(int(input()))
    for i in range(0,l):
        target.insert(index[i],nums[i])

    print(target)

