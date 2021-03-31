def remdupli(S):
    if len(S)==1:
        return S
    if S[0]==S[1]:
        return remdupli(S[1:])
    return S[0]+remdupli(S[1:])
S=input('Enter string: ')
print('Output:',remdupli(S))
