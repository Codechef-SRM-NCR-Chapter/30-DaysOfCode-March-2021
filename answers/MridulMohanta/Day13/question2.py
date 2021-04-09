def palinrecur(x, y , z):
    if y >= z:
        return 1
    if x[y] == x[z]:
        return palinrecur(x , y+1 , z-1)
    else:
        return 0
n = input("Enter: ")
s = n.split()
s = [int(i) for i in s]

if palinrecur(s, 0, len(s) - 1):
    print("PALINDROME")
else:
    print("NOT PALINDROME")    
