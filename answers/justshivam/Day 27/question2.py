string, num = input(), int(input())
while len(string) < num:
    string += string
string = string[:num]
print(string.count('a'))
