n=input().lower()
alp=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
s=list(set(n))
s.sort()
s.remove(' ')
if alp == s:
    print("PANGRAM EXISTS")
else:
    print("PANGRAM DOESN'T EXISTS")
