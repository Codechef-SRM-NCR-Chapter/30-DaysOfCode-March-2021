l = input("Enter different no. of candies that each student has: ").split()
n = int(input("Enter extra number of candies: "))
list = []
for i in range(len(l)):
    if int(l[i]) + n >= int(max(l)):
        list.append(True)
    else:
        list.append(False)
print(list)
