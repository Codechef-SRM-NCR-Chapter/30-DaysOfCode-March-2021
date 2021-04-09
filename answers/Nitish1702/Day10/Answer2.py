n=input()
r=''
count=1
for i in range(len(n)):
    if i>0 and n[i].isupper() :
        r+='\n'+n[i]
        count+=1
    else:
        r+=n[i]
print(r)
print(count)
