inp = input("Enter n , m: ")
n , m = inp.split()
n = int(n)
m = int(m)

lan1 = []
lan2 = []

for i in range(0 , m):
    k = input()
    z = k.split()
    lan1.append(z[0])
    lan2.append(z[1])

sent = [None]*n
sen = input("Enter the sentence: ")
s = sen.split()

for i in range(0 , n):
    sent[i] = s[i]

for i in range(0 , len(sent)):
    for j in range(0 , len(lan1)):
        if sent[i] == lan1[j]:
            if len(lan1[j]) > len(lan2[j]):
                sent[i] = lan2[j]

print(" ".join(sent))
