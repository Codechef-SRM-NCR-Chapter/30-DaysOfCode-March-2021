def reverse(st):
    if len(st) == 1:
        return st[0]
    return st[-1] + " " + reverse(st[:-1])


string = input('Enter input: ')
print(reverse(string.split()))
