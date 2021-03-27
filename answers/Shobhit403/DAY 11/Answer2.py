string = input("Enter a string-: ")
no = int(input("Number of patterns-: "))
for i in range(0,no):
    pn = input("\nWrite the pattern-: \n")
    a=string.count(pn)
    print(a)
