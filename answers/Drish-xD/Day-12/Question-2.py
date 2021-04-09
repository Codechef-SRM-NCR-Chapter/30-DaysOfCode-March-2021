# Program to to count the number of such substrings that start and end with 1 :)


def count(strr):
    x = 0
    l = len(strr)
    for i in range(l):
        if strr[i] == '1':
            for j in range(i, l):
                if strr[j] == '1':
                    x += 1
    return x


sol = []
x = int(input("Enter number of test cases :"))
for i in range(x):
    y = input("Enter the string :")
    sol.append(count(y))
for i in sol:
    print(i)
