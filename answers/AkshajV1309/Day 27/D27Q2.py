import math
S,i=list(input('Enter string')),int(input('Enter No. charecters to consider:'))
S*=math.ceil(i/len(S))
print(S[:i].count('a'))      
