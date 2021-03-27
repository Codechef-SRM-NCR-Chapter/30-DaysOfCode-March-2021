# Given string and patterns, find the number of times pattern appears in string

s = input('Enter a string ')
n = int(input("Enter no of patterns: "))
for i in range(0,n):
    p = input()
    print(s.count(p))
