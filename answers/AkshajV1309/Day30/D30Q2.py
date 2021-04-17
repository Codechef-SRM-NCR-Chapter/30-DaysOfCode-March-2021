I=input('Enter String: ')
if I.count('4')==0 and I.count('7')==0:
    print('Output:',-1)
else:
    if I.count('4')>=I.count('7'):
        print('Output:',4)
    else:
        print('Output:',7)
