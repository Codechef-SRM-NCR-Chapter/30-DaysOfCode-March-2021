a = 1
while(a<=10):
    if a in [2, 3, 5, 7]:
        print("#", end = " ")
    else:
        print("*", end = " ")
    if a in [1, 3, 6]:
        print("\r")
    a+=1
