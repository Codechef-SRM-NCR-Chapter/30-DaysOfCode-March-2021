string = input("Enter a string : ")
n = int(input("Number of patterns : "))
for i in range(0,n):
    ptrn = input("Write the pattern : ")
    a=string.count(ptrn)
    print("Pattern occurs :a",a,"times")
