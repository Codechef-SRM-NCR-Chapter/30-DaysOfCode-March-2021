#Palindrome array
n=int(input()) #no of elements in list
l=[] #list to store elements
for i in range(0,n,1):
    e=int(input())
    l.append(e)
l2=l[::-1]
if(l2==l):
    print("palindrome")
else:
    print("Non Palindrome")
