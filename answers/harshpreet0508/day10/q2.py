# Display the concatenated words from CamelCase string
# in different lines and also total number of words

def func(str):
    c=1
    s=0
    l=len(str)-1
    
    for i in range(1,l):
        if str[i].isupper() :
            print(str[s:i])
            c=c+1
            s=i
    print(str[s:])
    print(c)

str=input('Enter a string ')
func(str)

