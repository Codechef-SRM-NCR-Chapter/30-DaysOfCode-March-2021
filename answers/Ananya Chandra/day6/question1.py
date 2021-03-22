try:
    candies= []
    print(" enter the number of candies each kid has and type 'stop' when you are done\n" )
    while True:
        candies.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    extraCandies = int(input("enter the number of extra candies\n"))
    max=0
    answer=[]
    for i in candies:
        if(i>max):
            max=i
    for i in candies:
        if((i + extraCandies)>=max):
            answer.append(True)
        else:
            answer.append(False)
    print(answer)
