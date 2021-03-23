i=1
while (i<=10):
    if i in [2,3,5,7]:
         print(" # ",end=" ")
    else:
        print(" * ",end=" ")
    if i in [1,3,6]:
        print ("\r")
    i+=1
