print("Input:",end="")
n = input("\t")

count_4 = 0
count_7 = 0

for i in n:
    if i == "4":
        count_4 += 1
    if i == "7":
        count_7 += 1
        
print("\nOutput:\t",end="")

if count_7 == count_4 == 0:
    print("-1")
elif count_4 >= count_7:
    print("4")
else:
    print("7")
