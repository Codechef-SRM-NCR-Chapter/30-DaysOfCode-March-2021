res=[]
def palindrome(i):
    if i<=length:
        global res
        res.append(l[-i])
        i+=1
        palindrome(i)
l=list(input().strip(' []').split(','))
length=len(l)
palindrome(1)
if res==l:
    print('PALINDROME')
else:
    print('NOT PALINDROME')
