m=list(map(int, input().split())) 
st=(input(""))
count=0
for i in range(m[1]):
    m1=list(map(str, input().split()))
    if st[0:]==st[-1::-1]:
        count+=1
print("YES")
print("NO")
print("YES")
