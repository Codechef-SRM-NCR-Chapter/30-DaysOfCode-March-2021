import numpy as py
import sys

print("Input:")
k = int(input())
n = int(input())
s = py.array(input("Enter number(give space after each digit): ").split()).astype(int)
if len(s) < k or len(s) > k:
        print("Enter number of length",k)
        sys.exit()

o = []
l = len(s)
o.extend(s[n-1::-1])

o.extend(s[n::1])

print("\nOutput:",o)
