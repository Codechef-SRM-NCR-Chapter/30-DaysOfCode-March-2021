import string
c = input("Enter the sentence: ")
z = [[c[0]]]

for i in c[1:]:
    if z[-1][-1].islower() and i.isupper():
        z.append(list(i))
    else:
        z[-1].append(i)
x = ["".join(word) for word in z]

for i in range(0 , len(x)):
    print(x[i])
print(len(x))
