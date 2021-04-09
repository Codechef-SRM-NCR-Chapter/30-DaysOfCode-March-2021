N=input("Enter the String: ")
a=[]
l=len(N)
for i in range(l-1,-1,-1):
    if a==[]:
        a.append(N[i])
    else:
        z=a.pop()
        if N[i]!=z:
            a.extend([z,N[i]])
    print(a)
print(-1) if len(a)==0 else print("".join(a[::-1]))
