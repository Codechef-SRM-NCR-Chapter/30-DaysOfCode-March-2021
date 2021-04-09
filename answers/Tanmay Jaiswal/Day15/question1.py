import string

print("Input: ",end="")
s = input("Enter string: ")

s = " "+s
l= len(s)

def rvse(i,test):
    if i>=0:
        test=s[i]+test
        
        if s[i]==" ":
            return test+rvse(i-1," ")
        else:
            return rvse(i-1,test)

    else:
        return " "


print("Output:",rvse(l-1,""))
