n=int(input())
s=0
a=0
print("Series is:",end=" ")
for i in range(1,n+1):
    s=s*10+i
    a+=s
    print(s,end=" ")
print("\nSum of series: "+str(a))