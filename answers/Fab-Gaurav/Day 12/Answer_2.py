def cal (string):
    count = 0
    for i in string:
        if i == '1':
            count += 1
    count += (count*(count-1))//2
    print("Number of substrings :",count,"\n")
    

loops = int(input("Enter the total number of arrays : "))
res = []
for i in range(loops):
    x = input("\nEnter the number of elements array : ")
    res.append(cal (input("Enter the elements : ")))
