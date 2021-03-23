l=input("CANDIES: ").lstrip("[").rstrip("]")
t=l.split(",")
boolist=[]
n= int(input("EXTRA CANDIES: "))
for i in range(len(t)):
    if int(t[i])+n>=int(max(t)):
        boolist.append("True")
    else:
        boolist.append("False")   
print(boolist)
