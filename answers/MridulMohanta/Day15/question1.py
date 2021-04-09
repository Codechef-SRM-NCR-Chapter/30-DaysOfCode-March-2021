def recurrev(string, start, end):
    if start >= end:
        return
    string[start] , string[end] = string[end] , string[start]
    recurrev(string , start+1 , end - 1)
n = input("Enter sentence: ")
m = n.split()
recurrev(m , 0 , len(m) - 1)
print(" ".join(m))
