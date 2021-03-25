n = input("Enter the number : ")
l = list(n)
s = set(l)
if len(l) == len(s):
    print(f"{n} is a unique number.")
else:
    print(f"{n} is not a unique number.")
