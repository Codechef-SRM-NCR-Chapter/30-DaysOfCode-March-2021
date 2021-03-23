try:
    candies=[]
    print("Enter the number of candies each kid has and type 'stop' when you are done\n")
    while True:
        candies.append(int(input()))

except:
    extra=int(input("Enter the number of extra candies\n"))
    max=0
    answer=[]
    for i in candies:
        if(i>max):
            max=1
    for i in candies:
        if((i+extra)>=max):
            answer.append(True)
        else:
            answer.append(False)
    print(answer)
