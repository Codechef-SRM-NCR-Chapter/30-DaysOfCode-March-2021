S,R=[i for i in input('Enter String: ')],''
for i in range(len(S)):
    R+=S.pop()
print('Output:',R)
