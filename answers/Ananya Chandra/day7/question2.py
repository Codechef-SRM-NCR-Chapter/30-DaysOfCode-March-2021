try:
    arr= []
    print(" Enter the integer inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l = len(arr)
    print("Enter the values of a,b and c \n")
    a=int(input())
    b=int(input())
    c=int(input())
    t=0
    count=0
    answers=[]
    trip=[]
    for i in range(0, l - 2):
        for j in range(i+1, l - 1):
            for k in range(j+1, l):
                trip.append(arr[i])
                trip.append(arr[j])
                trip.append(arr[k])
                aa = abs(trip[0] - trip[1])
                bb = abs(trip[1] - trip[2])
                cc = abs(trip[0] - trip[2])
                if (aa <= a and bb <= b and cc <= c):
                    count += 1
                    answers.append(trip)
                trip = []
    print("There are ",count,"good triplets\n")
    print(answers)




