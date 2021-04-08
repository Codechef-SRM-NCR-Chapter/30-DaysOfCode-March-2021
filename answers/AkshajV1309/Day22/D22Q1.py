S,T=input("Enter Binary Str: "),[]
for i in range(len(S)-1,-1,-1):
    if T==[]:
        T.append(S[i])
    else:
        c=T.pop()
        if S[i]!=c:
            T.extend([c,S[i]])
    print(T)
print(-1) if len(T)==0 else print("".join(T[::-1]))
