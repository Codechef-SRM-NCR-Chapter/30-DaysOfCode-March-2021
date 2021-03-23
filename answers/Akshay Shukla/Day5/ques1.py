x,y,z=0,1,0
print(x,',',y,end="")
for i in range(1,49):
    z=x+y
    print(',',z,end="")
    x=y
    y=z
