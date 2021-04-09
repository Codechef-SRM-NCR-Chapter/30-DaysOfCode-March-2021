def strev(S,i=0):
    if i<len(S)//2:
        S[i],S[len(S)-1-i]=S[len(S)-1-i],S[i]
        return strev(S,i+1)
    return(S)
S=input("Enter String").split()
print(" ".join(strev(S)))
