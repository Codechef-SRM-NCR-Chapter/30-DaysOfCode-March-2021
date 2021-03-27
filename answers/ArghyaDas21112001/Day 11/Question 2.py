str = input("Enter the string: ")
size=int(input("Enter the number of substrings: "))
for i in range(0,size):
    substring = input("Enter the substring: ")
    count = str.count(substring)
    print(count)
