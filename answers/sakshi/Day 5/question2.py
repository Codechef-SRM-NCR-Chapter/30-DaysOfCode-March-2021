for i in range(0,4,1):
    for j in range(0,i+1,1):
        if i<3:
            if i%2!=0:
                print("#",end=" ")
            else:
                if(j%2==0):
                    print("*",end=" ")
                else:
                    print("#",end=" ")
        else:
            if(j==0):
                print("#",end=" ")
            else:
                print("*",end=" ")

    print("\n")   
