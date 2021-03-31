def remove_adjacentdup(string):
    for i in range(len(string)-1):
        if string[i]==string[i+1]:
            string=string.replace(string[i]*2 , string[i])
            return remove_adjacentdup
        return string
a=input('enter string')
print(remove_adjacentdup(a))
