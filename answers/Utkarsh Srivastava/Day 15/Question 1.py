def reverse(S,n,word,temp):
    if len(S) == 0:
        temp = temp + word
        print(temp)
        return S
    if(S[n]!=" "):
        word = S[n]+word 
        return reverse(S[:n],n-1,word,temp)
    else:
        temp = temp + word + " "
        return reverse(S[:n],n-1,'',temp)
S = input()
n = len(S)-1
print(reverse(S,n,'',''))
