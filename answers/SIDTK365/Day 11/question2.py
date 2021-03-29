s = input()
k = int(input())
lst = []
for i in range(0,k):
    t = input()
    count = s.count(t)
    lst.append(count)

print(lst)
